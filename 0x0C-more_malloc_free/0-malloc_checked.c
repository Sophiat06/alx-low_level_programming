#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory by using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
