#include "function_pointers.h"
/**
 * print_name - prints name by using the pointer to a function
 * @name: string to be added
 * @f: pointer to function
 * Return: Alwayd 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
