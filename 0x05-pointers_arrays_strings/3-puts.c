#include "holberton.h"

/**
 *_puts - prints a string with a new line
 *
 *@str: the string to be printed using stdout
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
