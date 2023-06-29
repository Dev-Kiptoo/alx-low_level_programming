#include "main.h"

/**
<<<<<<< HEAD
 * *cap_string - capitalize all words of a string 
=======
 * *cap_string - capitalize all words of a string
 * @ar: the pointer to the character
>>>>>>> 6bc4cbe8b45320620f92e984aaa08984e3027c8d
 * Return: arr
*/
char *cap_string(char *arr)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> 6bc4cbe8b45320620f92e984aaa08984e3027c8d
