#include "lists.h"

/**
 * free_listint - A function that frees listint_t list
 * @head: the head of the list
 *
 * Return: return nothing
*/
void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
