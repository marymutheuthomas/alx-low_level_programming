#include"lists.h"

/**
 * rint_listint - function that prints all the elements of a listint_t list
 * @head: pointer to head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		count++;
		current = current->next;
		printf("\n");
	}
	return (count);
}

