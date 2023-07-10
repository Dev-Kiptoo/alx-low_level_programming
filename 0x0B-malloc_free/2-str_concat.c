#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that returns a concatanated pointer
 * @s1: first source pointer
 * @s2: second source pointer
 * Return: NULL and concat
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat = '\0';
	return (concat);
}
