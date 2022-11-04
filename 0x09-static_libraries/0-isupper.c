#include "main.h"

/**
 * _isupper - checks if a letter is an uppercase.
 * @x: the number to be checked.
 * Return: 1 if is an uppercaser letter 0 any else.
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
