#include "main.h"

/**
 * _strncat - prints the concatanated two strings
 * @dest: the destination
 * @src: the source
 * @n: the number of times the strings are copied
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
