#include "holberton.h"

/**
 *more_numbers - print numbers from 0 to 14 x10
 *Return: void
 */
void more_numbers(void)
{
	int i, a, b;
	int num;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				for (b = 0; b < 2; b++)
				{
					num = (b == 0) ? i / 10 : i % 10;
					_putchar(num + '0');
				}
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
