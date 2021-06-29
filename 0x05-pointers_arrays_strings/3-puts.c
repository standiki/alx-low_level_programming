#include "holberton.h"

/**
 *_puts - prints a string with a new line
 *
 *@str: the string to be printed using stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
