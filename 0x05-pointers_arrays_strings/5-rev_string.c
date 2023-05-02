#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int _count = 0, i, j;
	char *str, temp;

	while (_count >= 0)
	{
		if (s[_count] == '\0')
			break;
		_count++;
	}
	str = s;

	for (i = 0; i < (_count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
