#include "main.h"
/**
 * main - a program that prints a-z 10 times
 *
 * Return: 0
 */
int main(void)
{
	int a;
	char b;

	a = 0;
	while (a < 10)
		{
			for (b = 'a'; b <= 'z'; b++)
			{
				_putchar(b);
			}
			a++;
			_putchar('\n');
		}
	return (0);
}
