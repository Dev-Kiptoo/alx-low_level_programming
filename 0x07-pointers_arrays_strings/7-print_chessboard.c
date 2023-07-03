#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer of the chessboard to be printed
 * Return: *a[8]
 */
void print_chessboard(char(*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		putchar('\n');
	}
}
