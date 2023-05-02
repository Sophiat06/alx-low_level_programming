#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen
 *
 * Return: Always 0
 */
int main(void)
{
	int r = 0;
	int b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		r = rand() % 128;
		if ((b + r) > 2772)
			break;
		b = b + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
