#include"lists.h"

/**
 * list_len - function to print the length of a linked list
 * @h: pointer to linked list head
 * Return: size of linked list
 */

size_t list_len(const list_t *h)
{
	int nodeCount = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
