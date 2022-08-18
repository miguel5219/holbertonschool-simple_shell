#include "main.h"

/**
 * str_cat - Funtion that concatenates two strings
 * @dest: string1 where concatenated string is saved
 * @src: string2 that will be copied in dest
 * Return: Concatenated string
 */

char *str_cat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	i = str_len(dest);

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
