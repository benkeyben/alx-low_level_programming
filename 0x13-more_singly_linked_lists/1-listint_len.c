#include "lists.h"

/**
 * listint_len - A function which returens the number
 * of elements in a linked listint_t list
 * @h: list head
 *
 * Return: returns the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *el_num = h;

	for (i = 0; el_num != NULL; i++)
		el_num = el_num->next;
	return (i);
}
