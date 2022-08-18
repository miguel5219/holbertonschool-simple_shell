#include "main.h"

/**
  * fork_process - this function forks the process
  * @token_line: line containing token
  * @path: command path
  * Return: 0 (success)
  */

int fork_process(char **token_line, char *path)
{
	int status = 0;
	pid_t pid_child = 0;

	pid_child = fork();
	if (pid_child < 0)
		return (-1);

	if (pid_child > 0)
	{
		wait(&status);
		free(path);
		free(token_line);
	}
	else if (pid_child == 0)
	{
		if (execve(path, token_line, environ) == -1)
			return (-1);
	}
	return (0);
}
