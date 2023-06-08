#include "main.h"
/**
 * flip_bits - counts the number of bits to be changed
 * from one number to another
 * @n: first input
 * @m: second input
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = exclusive >> a;
		if (now & 1)
			count++;
	}
	return (count);
}
