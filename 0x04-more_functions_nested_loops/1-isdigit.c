#include "main.h"
/**
 * _isdigit - prints the numver is digit
 * @c: Interger
 * Return: 0 and 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
