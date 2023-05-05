#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int _count = 0, _count2 = 0;

	while (*(dest + _count) != '\0')
	{
		_count++;
	}
	while (_count2 >= 0)
	{
		*(dest + _count) = *(src + _count2);
		if (*(src + _count2) == '\0')
			break;
		_count++;
		_count2++;
	}
	return (dest);
}

