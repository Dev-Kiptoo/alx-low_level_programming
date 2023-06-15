#include<stdio.h>
/**
 * main - entry poing
 *
 * Return: 0 (Succesful)
 */
int main(void)
{
	int a;
	char j;
	long int k;
	long long int w;
	float y;

	printf("Size of a char: %lubyte(s)\n", (unsigned long)sizeof(j));
	printf("Size of an int: %lubytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lubytes(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lubytes(s)\n", (unsigned long)sizeof(w));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(y));
	return (0);
}
