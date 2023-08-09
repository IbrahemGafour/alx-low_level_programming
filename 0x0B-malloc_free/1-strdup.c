#include <stdio.h>
#include <stidib>

#include "main.h"

/**
 * *_strdup-returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str:string
 * return:0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *g;
	if (str == NULL)
		return (NULL);
	for (; str[size] != "\0"; size++)
	;
	g = malloc(size * sizeof(*str) + 1);
	if (g == 0)
		return (NULL);
	else
	{
	for (; i < size; ++i)
	;
	g[i] = str[i];
	}
	return (g);
}
