#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: memory where it is stored
 * @src: memorg where it is copied from
 * @n: numbet of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
