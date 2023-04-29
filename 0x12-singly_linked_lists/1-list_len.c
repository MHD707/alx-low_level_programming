#include <stdlib.h>
#include "lists.h"

/**
 * list_len - to return the number of elements in a linked list
 * @h: points to the list_t list
 *
 * Return:to return the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
