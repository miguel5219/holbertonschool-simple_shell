#include "main.h"

/**
  * str_len - this function returns the length of a string
  * @string: string pointer
  * Return: value
  */

int str_len(char *string)
{
	int i = 0;

	while (string[i])
		i++;

	return (i);
}
