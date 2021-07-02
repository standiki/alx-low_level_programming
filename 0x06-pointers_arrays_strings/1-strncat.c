#include "holberton.h"

/**
 *_strncat - concatenate two strings
 *@dest: pointer parameter destination
 *src: pointer parameter source
 *n: size for sr
 *
 *Return: destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
