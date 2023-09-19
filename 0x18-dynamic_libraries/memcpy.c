#include "main.h"
/**
 * _memcpy - copys data to the memory
 * @dest: the character to be copied
 * @src: the address for the copied memory
 * @n: number of times the memory is filled
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
