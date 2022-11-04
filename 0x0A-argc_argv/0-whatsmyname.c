#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: count arguments.
 * @argv: array of character pointers listing all the arguments.
 * Return: always 0 - success.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
