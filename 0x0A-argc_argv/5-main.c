#include <stdio.h>
#include <stdlib.h>
/**
 * the program used to generate the number of coins 
 *
 */
int coins(int cents)
{
	int i, num_coins, coins_values;
	int coins_values[] = {25, 10, 5, 2, 1};

	num_coins = 0;
	for (i = 0; i < (sizeof(coins_values) / sizeof(coins_values[0])); i++)
	{
		int coins_current_value = cents/coins_values[i];

		num_coins += coins_current_value;
		cents -= coins_current_value * coins_values[i];
	}
	return (num_coins);
}
