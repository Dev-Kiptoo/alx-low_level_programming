#include <stdio.h>
#include <string.h>
/**
 * main - puts the numbers of arguments passed to it
 * @argc: the numbers of arguments passed
 * @argv: string of arrays
 * Return: the number of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
