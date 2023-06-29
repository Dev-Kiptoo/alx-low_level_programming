#include "main.h"

/**
 * _strncpy - copies the files from the source to the destination
 * @dest: the destination
 * @src: the source
 * 
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
    strncpy(dest, src, n);
    return (0);
}