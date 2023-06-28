# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char *str = ")(((((========)&&&789''***-))))";
    int i;
    int j;
    char res[1000];

    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[1] >= 0 && str[1] <= 0 && isdigit(str[i+1])==1)
        {
            res[j] = str [j];
        }

        if (!(isdigit(str[i + 1]) && res[0]))
        {
            break;
        }
    }
    return(0);
}