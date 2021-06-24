#include "holberton.h"

/**
 *print_line - prints the '_' n times
 *@n: integer
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
