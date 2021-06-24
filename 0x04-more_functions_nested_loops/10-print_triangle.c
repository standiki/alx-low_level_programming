#include "holberton.h"

/**
 *print_triangle - prints sized triangle
 *@size: integer
 *Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;

	b = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				if (a >= b)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			b--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
