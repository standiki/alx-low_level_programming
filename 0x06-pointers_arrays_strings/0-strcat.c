#include "holberton.h"

/**
 *_strcar - concatenate two strings dest & src
 *@dest: pointer param destination
 *src: pointer param source
 *
 *Return: destinatina variable (dest)
 */
char *_strcat(char *dest, char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
