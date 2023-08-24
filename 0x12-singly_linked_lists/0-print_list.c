#include<stdio.h>
#include"lists.h"
#include<stdlib.h>

/**
 * print_list - futcion to print the elements of a linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->len == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			count++;
		}
		current = current->next;
	}
	return (count);
}

