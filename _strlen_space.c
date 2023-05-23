#include "shell.h"

/**
 * _strlen_space - check the code.
 * @s: string variable as a parameter.
 *
 *Return: the lenght of the string
 */
int _strlen_space(char *s)
{
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			j++;
	}
	return (j);
}

