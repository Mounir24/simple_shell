#include "shell.h"

/**
 *built_in_funcs - function that execute built in functions.
 *@argv : all parameters passed by the user.
 *@old: the memory allocation for the old path.
 *@new: the memory allocation for the new path.
 *Return: an integer.
 */

int built_in_funcs(char **argv, char *old, char *new)
{
	int i = 0;
	int return_v;

	built_in func[] = {{"env", _env}, {"cd", _cd}, {NULL, NULL}};

	for (; func[i].command != NULL; i++)
	{
		if (_strcmp(argv[0], func[i].command) == 1)
		{
			(return_v = func[i].execute(argv, old, new));
			return (return_v);
		}
	}
	return (-1);
}

