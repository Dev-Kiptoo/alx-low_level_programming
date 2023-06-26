#include "main.h"
/**
 * _strlen - prints the string length
 * @s: the string character
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
