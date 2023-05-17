#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, n, r, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
			l++;
	}
	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	r = 0;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r] = '\n';
		r++;
	}
	return (str);
}
