#include "main.h"
/**
 * puts2 - prints one character out of 2 of a string
 * @str: input string
 * Return: Always 0
 */
void puts2(char *str)
{
	int _count = 0;

	while (_count >= 0)
	{
		if (str[_count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (_count % 2 == 0)
			_putchar(str[_count]);
		_count++;
	}
}
