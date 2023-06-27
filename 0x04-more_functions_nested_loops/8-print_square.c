#include "main.h"
/**
 * print_square - size
 * @size: size of the square
 * @compiling code: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
