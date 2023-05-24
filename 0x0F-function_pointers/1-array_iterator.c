#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elements on a new line
 * @array: array
 * @size: number of elements to be printed
 * @action: pointer to print in regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0;  a < size; a++)
	{
		action(array[a]);
	}
}

