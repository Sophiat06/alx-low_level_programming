#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int _count = 0, i;

	while (_count >= 0)
	{
		if (str[_count] == '\0')
			break;
		_count++;
	}
	if (_count % 2 == 1)
		i = _count / 2;
	else
		i = (_count - 1) / 2;
	for (i++; i < _count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
