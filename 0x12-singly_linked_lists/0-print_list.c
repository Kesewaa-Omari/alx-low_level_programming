#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to constant list_t to print
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t str = 0;

	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");

	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	str++;
	}
	return (str);
	}
