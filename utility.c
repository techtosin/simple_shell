#include "simishell.h"

/**
 * envir - a function which excutes the /bin/ls program to list files
 * @line: an array of command and arguments
 *
 * Return: returns 1 in success and -1 if it fails
 */

int envir(char *line[] __attribute__((unused)))
{
        int i = 0;
        
        

        while(environ[i] != NULL)
        {
                write(1, environ[i], strleng(environ[i]));
                write(1, "\n", 2);
                i++;
        }
        free(line);
        return (1);
}
