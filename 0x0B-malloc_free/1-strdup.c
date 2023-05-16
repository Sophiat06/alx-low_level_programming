#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the copird string
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, leng;

	i = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	duplicate = malloc(sizeof(char) * (leng + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
