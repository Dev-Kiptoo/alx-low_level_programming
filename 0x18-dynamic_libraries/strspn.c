#include "main.h"
/**
 * _strspn - a function that gets the length of the prefix substring
 * @s: The first character pointer
 * @accept: the destiny pointer
 * Return: add
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int add = 0;

	while (*s != '\0' && *s != ' ')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				add++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (add);
}
