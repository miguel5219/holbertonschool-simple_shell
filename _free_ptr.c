#include "main.h"

/**
  * _free_ptr - this function is to release ptr
  * @p: pointer to free
  * Return: success
  */

void _free_ptr(char **p)
{
	int i = 0;

	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}
