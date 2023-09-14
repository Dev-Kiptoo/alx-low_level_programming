#include "main.h"
/**
 * _isalpha - checks the returns alphabet
 * @c: the value returned
 * Return: 1 if c is a lettter, otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
