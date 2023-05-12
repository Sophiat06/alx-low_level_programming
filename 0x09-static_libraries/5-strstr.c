#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *q = needle;

		while (*l == *q && *q != '\0')
		{
			l++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
