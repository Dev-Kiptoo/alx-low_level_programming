#include "main.h"
/**
 * print_line - Printing a line
 * @n: - The integer to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n >= 0; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
