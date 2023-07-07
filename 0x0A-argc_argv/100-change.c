#include "main.h"
/**
 * main - prints the changes and the coins
 * @argc: the count of the arrays
 * @argv: the array strings
 * Return: Coins
 */
int main(int argc, char *argv[])
{
	int cents, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = coins(cents);
	printf("%d\n", num_coins);
	return (0);
}
