#include "shell.h"

/**
 * isnumber - checkes nums
 * @str: a string.
 *
 * Return: 1 if s is a number, 0 otherwise.
 */

int isnumber(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		if (_isdigit(s[i++]) == 0)
			return (0);
	}

	return (1);
}
