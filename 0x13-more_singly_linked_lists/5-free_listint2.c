#include "lists.h"

/**
 * free_listint2 - Free the memory allocated for
 * a linked list and set the head pointer to NULL.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}

