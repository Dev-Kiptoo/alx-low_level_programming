#include "main.h"
#include <stdlib.h>

/**
 * malloc - memory allocation
 * @b: the size of the memory to be allocated
 * Return: exit(98) if null, ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
