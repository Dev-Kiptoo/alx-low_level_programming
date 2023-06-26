#include "main.h"
/**
 * _puts - putting the variable
 * @str: The string
 * Return: putss
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
