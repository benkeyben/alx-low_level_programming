#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * nth node of listint_t linked list
 * @head: pointer to head of link list
 * @index: index of the node starting at 0
 *
 * Return: returns the nth node of a listint_t or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
