#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t
 * @head: head of the list linked listint_t
 *
 * Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (head == NULL)
		return;

	while (*head)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
	}
	head = NULL;
}
