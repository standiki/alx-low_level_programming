#include <stdio.h>

/**
 * main - prints number of args passed
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 0 while successful
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc >= 0)
	{
		while (argv[count])
			count++;

		printf("%d\n", count - 1);
	}

	return (0);
}
