#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a singly linked list
 * @head: pointer to the singly linked list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *tempp;

	while (head)
	{
		tempp = head->next;
		free(head->str);
		free(head);
		head = tempp;
	}
}
