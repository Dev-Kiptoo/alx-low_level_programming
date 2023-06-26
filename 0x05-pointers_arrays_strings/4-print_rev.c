#include "main.h"
/**
 * print_rev - prints the reverse of a character
 * @s: the string to be returned
 * Return: the reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
