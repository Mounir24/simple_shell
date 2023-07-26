#include "shell.h"
  
/**
 * _strlen -  returns the length of a string
 * @str: pointer to a string
 *
 * Return: length of a string
 */

int _strlen(char *str)
{
        int n = 0;

        while (str[n] != '\0')
                n++;

        return (n);
}
