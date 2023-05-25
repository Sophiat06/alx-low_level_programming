#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all parameters passed to it
 * @n: the number of paramrters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 *
 * Return: 0 if n == 0 - 0, otherwise the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
