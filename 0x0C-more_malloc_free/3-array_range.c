#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that returns the range of the min and max
 * @min: minimu int
 * @max: maximum int
 *
 * Return: NULL and ARR
 */
int *array_range(int min, int max)
{
	int *range, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		range[i] = min + i;
	}
	return (range);
}
