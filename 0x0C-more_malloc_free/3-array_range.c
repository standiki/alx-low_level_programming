#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: minimun range
 *@max: maximun range
 *Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, hold = 0;

	if (min > max)
		return (NULL);

	hold = (max - min) + 1;
	ptr = malloc(sizeof(int) * hold);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < hold; i++)
		ptr[i] = min + i;

	return (ptr);
}
