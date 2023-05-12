#include "main.h"
/**
 * _isupper - upper case letters
 * @c: char to be checked
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
