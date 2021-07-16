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
	unsigned int i, size;
	void *str;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		str = malloc(new_size);
		size = new_size;
		if (old_size < new_size)
			size = old_size;
		for (i = 0; i < size; i++)
			((char *)str)[i] = ((char *)ptr)[i];
		free(ptr);
	}
	else
		return (NULL);
	return (str);
}
