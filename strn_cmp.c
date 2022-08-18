#include "main.h"

/**
  * strn_cmp - this function compares two strings
  * @string1: string 1
  * @string2: string 2
  * @n: number of characters
  * Return: success if string are equal, error if string are different
  */

char *strn_cmp(char *string1, char *string2, size_t n)
{
	while (n && *string1 && (*string1 == *string2))
	{
		++string1;
		++string2;
		--n;
	}
	if (n == 0)
	{
		return (string1);
	}
	else
	{
		return (NULL);
	}
}
