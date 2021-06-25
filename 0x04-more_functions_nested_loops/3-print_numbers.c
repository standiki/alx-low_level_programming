#include "holberton.h"

/**
*print_numbers: print number 0 - 9 using putchar
*/

void print_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
