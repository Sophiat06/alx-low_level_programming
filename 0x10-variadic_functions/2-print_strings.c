#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Return: if separator is NULL, it is not printed
 * if one of the strings is NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int value;

	va_start(string, n);

	for (value = 0; value < n; value++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (value != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
