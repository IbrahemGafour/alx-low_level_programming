#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: an input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *m = needle;


		while (*h == *m && *m != '\0')
		{
			h++;
			m++;
		}


		if (*m == '\0')
			return (haystack);
	}


	return (0);
}
