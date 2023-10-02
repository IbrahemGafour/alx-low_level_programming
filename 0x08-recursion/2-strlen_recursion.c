#include "main.h"

/**
 * _strlen_recursion - return the lenth of string
 * @s: string pointer
 * return int
 */

int _strlen_recursion(char *s)
{
int nr = 0;
if (*s > '\0')
{
	nr += _strlen_recursion(s + 1) + 1;
}
	return (nr);
}
