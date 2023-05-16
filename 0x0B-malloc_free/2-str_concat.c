#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: pointer to the new createx string
 */
char *str_concat(char *s1, char *s2)
{
	char *s37;
	unsigned int i = 0, j = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	s37 = malloc(sizeof(char) * (leng1 + leng2 + 1));
		if (s37 == NULL)
			return (NULL);

		i = 0;
		j = 0;

		if (s1)
		{
			while (i < leng1)
			{
				s37 = s1;
				i++;
			}
		}
		if (s2)
		{
			while (i < (leng1 + leng2))
			{
				s37[i] = s2[j];
				i++;
				j++;
			}
		}
		s37[i] = '\0';
		return (s37);
}
