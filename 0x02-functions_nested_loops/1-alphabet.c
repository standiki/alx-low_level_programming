#include "holberton.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
