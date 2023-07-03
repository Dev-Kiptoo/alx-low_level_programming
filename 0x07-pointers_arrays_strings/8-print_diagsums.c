#include "main.h"
/**
 * print_diagsums - printing the sum of two diagonal of a square matrix
 * @a: the pointer containing the matrix
 * @size: the added diagonal
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_sec = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_sec += a[i * size + size - 1 - i];
	}
	printf("%d,%d\n", sum_main, sum_sec);
}
