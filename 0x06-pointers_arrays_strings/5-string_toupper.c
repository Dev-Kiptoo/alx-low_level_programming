#include "main.h"

/**
 * *string_toupper - function that converts lower case to uppercase
 * Return: Uppercase
 */
char *string_toupper(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		arr[i] = toupper(arr[i]);
		i++;
	}
	return (arr);
}