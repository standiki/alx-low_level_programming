#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two number
 *@argc: counts number of arguments
 *@argv: number of array
 *
 *Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
