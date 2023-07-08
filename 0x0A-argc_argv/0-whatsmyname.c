#include <stdio.h>
/**
 * main - a function that returns the name without the need of compiling it
 * @argc: count of the arguments
 * @argv: the arrays of the strings
 * Return: name
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
