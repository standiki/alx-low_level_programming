#include "holberton.h"

/**
 *_islower - checks lower character
 *@c: to be checked using ascii value
 *
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
