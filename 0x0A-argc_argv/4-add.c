#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - addition of two numbers
 * @argc: the count of the argument
 * @argv: the arrays of the strings
 * Return: error, 1, added value
 */
int main(int argc, char *argv[])
{
	int i, j, sum, num;

	if (argc == 0)
	{
		printf("0\n");
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
