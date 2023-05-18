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
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit (98);
	return (p);
}
