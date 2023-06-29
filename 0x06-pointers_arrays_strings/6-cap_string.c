#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * 
 * Return: arr
*/
char *cap_string(char *arr)
{
    bool capitalizeNext = true;
    while (*arr)
    {
        if (isspace(*arr))
        {
            capitalizeNext = true;
        }
        else if (capitalizeNext)
        {
            *arr = toupper(*arr);
            capitalizeNext = false;
        }
        else
        {
            *arr = tolower(*arr);
        }
        arr++;
    }
    return (arr);
}