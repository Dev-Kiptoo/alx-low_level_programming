#include "main.h"

/**
 * *leet - a function that replaces some characters
 * @array: the array to be generated
 * Return: arr;
 */
char *leet(char *arr)
{
	int i;
	int length = strlen(arr);
	
	for (i = 0; i < length; i++)
	{
		char c = arr[i];
		if (c == 'a' || c == 'A')
			arr[i] = '4';
		else if (c == 'e' || c == 'E')
		arr[i] = '3';
		else if (c == 'o' || c == 'O')
			arr[i] = '0';
		else if (c == 't' || c == 'T')
			arr[i] = '7';
		else if (c == 'l' || c == 'L')
			arr[i] = '1';
    	}
	return (arr);
}