#include "function_pointers.h"
/**
 * int_index - returns an index in place if comparison is true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to one of the function in main
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
