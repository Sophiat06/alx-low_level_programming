#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, nmemb * size);
	return (a);
}
