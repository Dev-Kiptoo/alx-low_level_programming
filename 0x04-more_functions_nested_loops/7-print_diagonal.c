#include "main.h"
/**
 * print_diagonal - print the diogonal
 * @n: number of times of the diogonal
 * Return: diogonal
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int j, k;

		for (j = 1; j < n;j++)
		{
			for (k = 1; k < n; k++)
			{
				if (k == j)
				{
					_putchar('$');
				}
				else if (k < j)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
