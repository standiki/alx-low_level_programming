#include <stdio.h>

/**
 *main - prints all argument it receives starting from the first one
 *@argc: counts number of argument passed
 *@argv: array of arguments
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (count >= 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}

	return (0);
}
