#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer entry
 *@old_size: size ptr
 *@new_size: ne size to allocate
 *Return: the pointer allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *added;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	added = ptr;
	if (new_size > old_size || ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			p[i] = added[i];
	}
	free(ptr);

	return (p);
}
