#include "lists.h"

/**
 * pop_listint - A function that deletes the head of
 * the listint_t lists and returns the head nodes data
 * @head: pointer to the head of the lists
 *
 * Return: returns the head nodes data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
