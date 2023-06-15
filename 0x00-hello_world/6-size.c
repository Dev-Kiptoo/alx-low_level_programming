# include <stdio.h>
/**
 * main - entry poing
 *
 * Return: 0 (Succesful)
 */
int main(void)
{
	int i = sizeof(char);
	int j = sizeof(int);
	int k = sizeof(long int);
	int l = sizeof(float);
	
	printf("%d%d%d%d\n", i, j, k, l);
	return (0);
}

