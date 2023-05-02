#include "main.h"
/**
 * _puts - puts a new string followed by a new line
 * @str: input string
 * Return: Always 0
 */
void _puts(char *str)
{
	int str_count = 0;

	while (str_count >= 0)
	{
		if (str[str_count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[str_count]);
		str_count++;
	}
}
