#include "main.h"


/**
 * *malloc_checked - allocate memory using malloc & exit if failed
 * @b: int
 * Return: pointer to the array inialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
