#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory of ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	ptrr = malloc(new_size);
	if (!ptrr)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrr[i] = old_ptr[i];
	}
	free(ptr);
	return (ptrr);
}
