#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns the duplicate of str
 * @str: char
 *
 * Return: Null if str == Null
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		new_str[j] = str[j];
	return (new_str);
}
