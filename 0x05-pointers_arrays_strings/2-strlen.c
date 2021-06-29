#include "holberton.h"

/**
 *_strlen - returns the lenght of a string
 *
 *@s:  string
 *Return: s length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
