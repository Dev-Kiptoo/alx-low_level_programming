#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an arrray of characters
 * @size: the unsigned int to be used by the malloc to allocate the memory
 * @c: The character
 * Return: Null if size == 0 and Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
