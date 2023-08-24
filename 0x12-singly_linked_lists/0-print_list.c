#include"lists.h"

/**
 * print_list - futcion to print the elements of a linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count_node = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count_node++;
	}
	return (count_node);
}

