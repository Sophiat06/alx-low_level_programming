#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
