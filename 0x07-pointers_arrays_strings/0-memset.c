#include "main.h"
#include <stddef.h>
/**
 * _memset - fills the memory of a constant byte
 * @s: The first character
 * @b: The second character
 * @n: the unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
