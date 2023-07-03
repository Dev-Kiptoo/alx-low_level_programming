#include "main.h"
/**
 * _strchr - locating a character in a string
 * @s: the character ponter
 * @c: the character to be located
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
