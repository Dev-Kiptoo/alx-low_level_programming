#include "main.h"
/**
 * set_string - sets the value of a pointer to a character
 * @s: a source pointer
 * @to: a destiny pointer
 * Return: 0
 */
void set_string(char **s, char *to)
{
	int length = strlen(to);

	*s = (char *)malloc((length + 1) * sizeof(char));
	strcpy(*s, to);
}
