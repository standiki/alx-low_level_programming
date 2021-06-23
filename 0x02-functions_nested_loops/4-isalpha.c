#include "holberton.h"

/**
 *_isalpha - print 1 if letter lower/upper case
 *@c: checked if lower upper character using ascii value
 *Return: 0 or 1
 */
int _isalpha(int c)
{
	int output;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		output = 1;
	}
	else
	{
		output = 0;
	}

	return (output);
}
