#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: pointer to const list_t
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
	len++;
	h = h->next;
	}
	return (len);
	}