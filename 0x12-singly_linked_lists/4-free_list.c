#include"lists.h"

/**
 * free_list - function to free linked list
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
	list_t *current = *head;
	
	while (current != NULL)
	{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	*head = NULL;
}

