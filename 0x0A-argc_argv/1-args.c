#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: count arguments.
 * @argv: array of character pointers listing all the arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
