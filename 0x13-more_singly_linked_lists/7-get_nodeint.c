#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index point in a
 * listint_t linked list
 * @head: first node in the listint_t linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node been searched for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
