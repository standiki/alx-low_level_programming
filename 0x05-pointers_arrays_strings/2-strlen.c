#include "holberton.h"

/**
 *_strlen - returns the lenght of a string
 *
 *@str:  string
 *Return: str length
 */
int _strlen(char *s)
{
      int length = 0;
	
	while (*s++)
		length++;

	return (length);
}
