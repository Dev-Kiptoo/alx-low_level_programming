#include <stdio.h>
/**
 * main - prints the argument entered
 * @argc: prints the count of the arrays
 * @argv: the array of strings
 * Return: the arguments
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
