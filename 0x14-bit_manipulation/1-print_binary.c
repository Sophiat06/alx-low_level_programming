#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, counts = 0;
	unsigned long int now;

	for (a = 63; a >= 0; a--)
	{
		now = n >> a;
		if (now & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}
