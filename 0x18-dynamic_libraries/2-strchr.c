#include "main.h"
/**
 * _strchr - locating a character in a string
 * @s: the character ponter
 * @c: the character to be located
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
