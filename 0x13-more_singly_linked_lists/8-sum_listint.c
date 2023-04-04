#include "lists.h"

/**
 * sum_listint - A function that sum all the data
 * (n) of a link lise
 * @head: head of the list
 *
 * Return: return the sum of the data or 0
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
