#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything passed to it
 * @format: types of arguments passed to the function above
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *sep = "";
	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%d", sep, va_arg(lists, int));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(lists);
}
