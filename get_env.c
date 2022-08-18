#include "main.h"

/**
 * get_env - Funtion that find the path of the command
 * @token: command
 * Return: path
 */

char *get_env(char *token)
{
	int i = 0;
	int j = 1;
	int path_len = 0;
	char **_tpath = NULL; 
	char *path = NULL;
	char *new_path = NULL;
	char delimiter = "=:";
	
	while (environ[i])
	{
		if (strn_cmp(environ[i], "PATH", 4) == 0)
		{
			path = str_dup(environ[i]);
			break;
		}
		i++;
	}
	if (!path)
		return (NULL);

	path_len = token_counter(path, delimiter);
	_tpath = malloc(sizeof(char *) * (path_len + 1));
	_tpath = tokenizer(path, delimiter);

	while (_tpath[j])
	{
		new_path = str_dup(_tpath[j]);
		new_path = str_cat(new_path, "/");
		new_path = str_cat(new_path, token);
		if (access(new_path, F_OK) == 0)
		{
			free(path);
			free(_tpath);
			return (new_path);
		}
		j++;
	}
	free(path);
	free(_tpath);
	return (NULL);
}
