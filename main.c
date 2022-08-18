#include "main.h"

/**
 * main - start point
 *
 * Return: EXIT_SUCCESS
 */

int main(void)
{
	char *line = NULL;

	while (1)
	{
		char *path = NULL;
		char **l_token = NULL;
		size_t size = 0;
		ssize_t num_char = 0;

		printf("$ ");
		num_char = getline(&line, &size, stdin);
		if (num_char == EOF)
			return (0);

		l_token = malloc(sizeof(char *) * (token_counter(line, " \n\t") + 1));
		l_token = tokenizer(line, " \n\t");
		if (!l_token)
		{	perror("./hsh");
			free(line);
			continue; }
		if (access(l_token[0], F_OK) == -1)
		{	path = get_env(l_token[0]);
			if (!path)
			{	perror("./hsh");
				free(path);
				_free_ptr(l_token);
				continue; }
		}
		else
			path = str_dup(l_token[0]);

		if (fork_process(l_token, path) == -1)
		{	perror("./hsh");
			free(l_token);
			free(path);
			free(line);
			continue; }
		free(line); }
	return (0);
}
