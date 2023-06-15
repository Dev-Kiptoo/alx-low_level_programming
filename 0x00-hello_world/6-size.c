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

	printf("Size of a char:%lu byte(s)\n", sizeof(a));
	printf("Size of an int:%lu bytes(s)\n", sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(k));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(w));
	printf("Size of a float: %lu bytes(s)\n", sizeof(y));
	return (0);
}
