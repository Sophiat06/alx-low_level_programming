#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
