#include "holberton.h"
/**
 *print_alphabet_x10 - prints a-z 10X
 *
 *Return: void
 */
void print_alphabet(voi)
{
	for (int i = 1; i < 11; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
