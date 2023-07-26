#include "shell.h"
<<<<<<< HEAD

=======
  
>>>>>>> 532ee68dcf5bf19d8503735229a72a3002b4d7f9
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
<<<<<<< HEAD
	int i = 0;

	while (n-- && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);

		i++;
	}

	return (0);
=======
        int i = 0;

        while (n-- && str1[i] && str2[i])
        {
                if (str1[i] != str2[i])
                        return (str1[i] - str2[i]);

                i++;
        }

        return (0);
>>>>>>> 532ee68dcf5bf19d8503735229a72a3002b4d7f9
}
