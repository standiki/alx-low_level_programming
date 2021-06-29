#include "holberton.h"

/**
 * print_rev - prints string in reverse.
 * @s: a string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{}

	for (; s[i - 1]; i--)
		_putchar(s[i - 1]);

	_putchar('\n');
}
