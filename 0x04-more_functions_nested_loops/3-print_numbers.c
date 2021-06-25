#include "holberton.h"

/**
*print_numbers: print number 0 - 9 using putchar
*
*Return: void

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n);
}
