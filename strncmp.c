#include "shell.h"
  
/**
 * _strncmp - compares two strings
 *
 * @str1: the first string
 * @str2: the second string
 * @n: length.
 * Return: the difference between the first two chars
 */

int _strncmp(char *str1, char *str2, int  n)
{
        int i = 0;

        while (n-- && str1[i] && str2[i])
        {
                if (str1[i] != str2[i])
                        return (str1[i] - str2[i]);

                i++;
        }

        return (0);
}
