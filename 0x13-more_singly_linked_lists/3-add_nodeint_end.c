#include "lists.h"

/**
 * add_nodeint_end - A function that add a new node at the end of
 * a listint_t list
 * @head: pointer to the head of the list
 * @n: integer
 *
 * Return: return the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (temp == NULL)
		*head = new_node;
	else
	{
		for (i = 0; temp->next != NULL; i++)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
