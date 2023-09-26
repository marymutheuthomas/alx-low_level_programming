#include "lists.h"

/**
 * free_listint - Free the memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

