#include "main.h"

/**
 * *_strcat -the function prints the concatanated pointers
 * @dest: the first pointer character
 * @src: the second pointer character
 * Return: concatanated pointers
*/
char *_strcat(char *dest, char *src)
{
    strcat(dest, src);
    return (dest);
}