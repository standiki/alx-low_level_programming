#include "holberton.h"

/**
 *print_sign - prints + positive, - negative, 0
 *@n: checked using character or ascii value
 *Return: + - or 0
 */
int print_sign(int n)
{
	int output;

	if (n > 0)
	{
		_putchar('+');
		output = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		output = 0;
	}
	else
	{
		_putchar('-');
		output = 1;
	}

	return (output);
}
