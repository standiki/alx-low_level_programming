#include "holberton.h"

/**
 *print_alphabet - prints alphabets with a new line
 *
 *Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
