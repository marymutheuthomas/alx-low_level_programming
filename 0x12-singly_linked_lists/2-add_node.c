#include"lists.h"

/**
 * add_node - function to add a new node
 * @head: pointer to the head of the linked list
 * @str: hold data to store in the new node
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t struct_size = sizeof(list_t);
	list_t *newNode = (list_t *)malloc(struct_size);

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

