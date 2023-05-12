#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: the string to be used
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int _sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			_sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= _sign;
	return (res);
}
