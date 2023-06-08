#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string that contains the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decima_value = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decima_value = 2 * decima_value + (b[a] - '0');
	}
	return (decima_value);
}
