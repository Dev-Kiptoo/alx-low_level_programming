#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
