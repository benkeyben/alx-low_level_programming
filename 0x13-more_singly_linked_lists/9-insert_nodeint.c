#include "lists.h"

/**
 * insert_nodeint_at_index - A function that insert a
 * new node at a given position
 * @head: head of the list
 * @idx: index of teh list where the new node will
 * @n: value for the new node to be added
 * Return: return a pointer to the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	*temp = *head;
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
