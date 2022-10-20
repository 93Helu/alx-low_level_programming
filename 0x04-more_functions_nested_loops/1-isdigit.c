#include "main.h"
/**
 * _isdigit - check if a character is digit.
 * @x: The number to be checked
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
