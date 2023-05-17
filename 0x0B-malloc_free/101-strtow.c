#include "main.h"
#include <stdlib.h>
/**
 * count_word - function that helps to count the number of words in a string
 * @s: string to be used
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * **strtow - splits a string into words
 * @str: string to be splitted
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **max, *tem;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tem = (char *) malloc(sizeof(char) * (c + 1));
				if (tem == NULL)
					return (NULL);
				while (start < end)
					*tem++ = str[start++];
				*tem = '\0';
				max[k] = tem - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	max[k] = NULL;
	return (max);
}
