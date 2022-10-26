#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int n = 0, i;

	while (dest[n])
		n++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		n += 1;
	}
	dest[n] = '\0';
	return (dest);
}
