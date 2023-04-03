#include "lists.h"

/**
 * add_nodeint - A function that add a new node at the beginning
 * of a listint_t list
 * @head: pointer to the head of the list;
 * @n: integer
 *
 * Return: return the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
