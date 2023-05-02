#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int _count = 0;

	while (_count >= 0)
	{
		*(dest + _count) = *(src + _count);
		if (*(src + _count) == '\0')
			break;
		_count++;
	}
	return (dest);
}
