#include "main.h"
/**
 * _strpbrk - searching (s) from the first occurence of any char 'accept'
 * @s: the string to be searched form
 * @accept: the character occurence
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
