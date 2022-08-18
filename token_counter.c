#include "main.h"

/**
  * token_counter - this function counts the tokens
  * @p: pointer to check
  * @delimiter: delimiter
  * Return: lenght of pointer
  */

int token_counter(char *p, char *delimiter)
{
	int i = 0;
	int j = 0;
	int lenght = 0;

	while (p[i])
	{
		j = 0;
		while (p[j])
		{
			if (p[i] == delimiter[j])
			{
				lenght++;
				break;
			}
			j++;
		}
		i++;
	}
	return (lenght);
}
