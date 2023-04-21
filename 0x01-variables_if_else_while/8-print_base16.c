#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	char hexvalues[] = "0123456789abcdef";

	for (a = 0; a < 16; a++)
	{
		putchar(hexvalues[a]);
	}
	putchar('\n');
	return (0);
}
