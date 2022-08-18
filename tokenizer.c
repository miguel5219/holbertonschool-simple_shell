#include "main.h"

/**
 * tokenizer - Separate the string into segments
 * @string: string to tokenize
 * @delimiter: delimiters characters
 * Return: tokens
 */

char **tokenizer(char *string, char *delimiter)
{
	int i = 1;
	int lenght = 0;
	char **tokens = NULL;

	lenght = token_counter(string, delimiter);
	tokens = malloc(sizeof(char *) * (lenght + 1));
	if (!tokens)
		return (NULL);

	tokens[0] = strtok(string, delimiter);
	if (!tokens[0])
	{
		_free_ptr(tokens);
		return (NULL);
	}

	while (i < lenght)
	{
		tokens[i] = strtok(NULL, delimiter);
		i++;
	}
	return (tokens);
}
