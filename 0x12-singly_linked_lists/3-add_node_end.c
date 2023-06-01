#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a singly linked list
 * @head: pointer to the list_t singly linked list
 * @str: string to be added to the new node
 *
 * Return: address of the new string or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New_string;
	list_t *tempp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	New_string = malloc(sizeof(list_t));
	if (!New_string)
		return (NULL);
	New_string->str = strdup(str);
	New_string->len = len;
	New_string->next = NULL;

	if (*head == NULL)
	{
		*head = New_string;
		return (New_string);
	}
	while (tempp->next)
		tempp = tempp->next;
	tempp->next = New_string;
	return (New_string);
}
