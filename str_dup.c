#include "main.h"

/**
 * str_dup - This is a function that duplicates a string
 * in an allocated memory space
 * @string: string to be copied
 * Return: new string
 */

char *str_dup(char *string)
{
	int i = 0;
	int j = 0;
	char *new_string = NULL;

	if (!string)
		return (NULL);

	i = str_len(string);

	new_string = malloc(sizeof(char) * (i + 1));

	if (!new_string)
	{
		perror("./hsh");
		return (NULL);
	}

	if (i == 0 || new_string == 0)
		return (NULL);

	while (j < (i + 1))
	{
		new_string[j] = string[j];
		j++;
	}
	return (new_string);
}

