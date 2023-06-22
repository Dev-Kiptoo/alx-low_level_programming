#include "main.h"
/**
 * _isupper - returns 0 otherwise and 1 if c is upper
 * @c: the charater being determined
 * Return: 0 and 1
 */
int _isupper(int c)
{
	c = 'A';
	if (c <= 'Z')
		return (1);
	return (0);
}

