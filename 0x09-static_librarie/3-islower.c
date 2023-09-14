#include "main.h"
/**
 * _islower - if the function is lower it returns 1 and 0 othwerwise
 * @c: 0 Always
 * Return: 0 and 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
