#include "holberton.h"

/**
 *main - Prints the word "Holberton" followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	char str;
	for (str = 'Holberton'; str <= 9; str++)
	{
		_putchar(str);
	}

	_putchar('\n');
	return (0);
}
