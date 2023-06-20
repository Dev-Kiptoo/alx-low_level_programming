#include "main.h"
/**
 * print_alphabet_x10 - a program that prints a-z 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	char b;

	a = 0;
	while (a < 10)
		{
			b = 'a';
			while (b <= 'z')
			{
				_putchar(b);
				b++;
			}
			a++;
			_putchar('\n');
		}
}
