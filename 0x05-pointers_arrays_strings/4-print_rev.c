#include "main.h"
/**
 * print_rev - prints a string in reverse, follow by a newline
 * @s: input string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int str_count = 0;

	while (str_count >= 0)
	{
		if (s[str_count] == '\0')
			break;
		str_count++;
	}

	for (str_count--; str_count >= 0; str_count--)
		_putchar(s[str_count]);
	_putchar('\n');
}
