#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (succesful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
