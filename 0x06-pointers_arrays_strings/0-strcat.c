#include "holberton.h"

/**
 *_strcar - concatenate two strings dest & src
 *@dest: pointer param destination
 *src: pointer param source
 *
 *Return: destinatina variable (dest)
 */
char *_strcat(char *dest, const char *src)
{
	while (*dest != 0)
		dest++;

	while (*src != 0)
	{
		src++;
		*dest = *src;
	}

	return dest;
}
