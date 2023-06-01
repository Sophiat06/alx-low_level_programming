#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a singly linked list
 * @h: pointer to the list_t linked lists
 *
 * Return: number of elements in the pointer h
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
