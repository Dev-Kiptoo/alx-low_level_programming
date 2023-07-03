#include "main.h"
/**
 * _strstr - a function to locate the occurence of a substring
 * @haystack: the substring containg needle
 * @needle: the substring to be located
 * Return: haystack and NULL;
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = needle;
		char *h = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
