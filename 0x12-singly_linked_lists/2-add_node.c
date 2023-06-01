#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the begining of a singly linked list
 * @head: double pointer to the list_t singly linked list
 * @str: the new string to be added to the node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *New_string;
	unsigned int len = 0;

	while (str[len])
		len++;
	New_string = malloc(sizeof(list_t));
	if (!New_string)
		return (NULL);
	New_string->str = strdup(str);
	New_string->len = len;
	New_string->next = (*head);
	(*head) = New_string;

	return (*head);
}
