#include <stdio.h>

/**
 *main - prints from 1 - 100 excluding 3 and 5
 *Return: 0 
 */
int main(void)
{
	int a;
	int b;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;

		if (a == 0 && b == 0)
			printf("FizzBuzz");
		else if (b == 0)
			printf("Buzz");
		else if (a == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
