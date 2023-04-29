#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of the whole linked list
 * @h: to point the list_t list to print
 *
 * Return: should return the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (b)
	{
		if (!b->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", b->len, b->str);
		b = b->next;
		z++;
	}

	return (z);
}
