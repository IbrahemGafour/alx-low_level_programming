#include <stdio.h>

/**
  * main -  prints all arguments it receives.
  * @argc: argument count
  * @argv: arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int j;

	if (argc > 0)
	{
	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	}
	return (0);
}
