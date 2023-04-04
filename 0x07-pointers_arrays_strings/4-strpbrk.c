#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: the pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
				if (*s == accept[x])
					return (s);
			}
			s++;
		}
	return (NULL);
}
