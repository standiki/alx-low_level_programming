#include <stdio.h>

/**
 * main - prints this program name with a new line
 *@argc: counts number of arguments passed
 *@argv: array of arguments passed
 *
 *Return: 0 on success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
