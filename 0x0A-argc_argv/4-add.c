#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive number
 *@argc: count number of arguments
 *@argv: number of array
 *
 *Return: 0 on success or 1 for error
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
