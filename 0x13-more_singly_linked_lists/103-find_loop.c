#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list of type listint_t
* @head: linked list to be searched for
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *run = head;
	listint_t *walk = head;

	if (!head)
		return (NULL);
	while (run && walk && walk->next)
	{
		walk = walk->next->next;
		run = run->next;
		if (walk == run)
		{
			run = head;
			while (run != walk)
			{
				run = run->next;
				walk = walk->next;
			}
			return (walk);
		}
	}
	return (NULL);
}
