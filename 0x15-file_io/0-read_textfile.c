#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: it the filename to be opened
* @letters: it is the letter to be opened
*
* Return: returns the Writtenbytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        if (filename == NULL)
        {
                return (0);
        }

        FILE *file = fopen(filename, "r");
        if (file == NULL)
                return (0);
        char *mem = malloc(sizeof(char) * (letters + 1));
        if (mem == NULL)
        {
                fclose(file);
                return (0);
        }

        ssize_t read = fread(mem, sizeof(char), letters, file);
        if (read <= 0)
        {
                fclose(file);
                free(mem);
                return (0);
        }

        ssize_t write = fwrite(mem, sizeof(char), read, stdout);
        if (write < read)
        {
                fclose(file);
                free(mem);
                return (0);
        }

        free(mem);
        fclose(file);
        return (read);
}