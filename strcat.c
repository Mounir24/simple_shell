#include "shell.h"

/**
 * _strcat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int destlen, srclen;
	char *k;

	destlen = _strlen(dest);
	srclen = _strlen(src);

	k = malloc(sizeof(char) * (destlen + srclen + 1));
	/* COPY MEMORY AREA  */
	_memcpy(k, dest, destlen);

	while (*src)
	{
		k[destlen++] = *src++;

	}

	k[destlen] = '\0';
	return (k);
}
