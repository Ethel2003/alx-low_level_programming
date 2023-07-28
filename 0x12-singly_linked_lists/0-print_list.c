#include "list.h"
#include <stdio.h>

/**
 * print_listint - print the int value in each element of a list.
 * @l: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *l)
{
	size_t n_nodes = 0;

	if (!l)
		return (0);

	while (l)
	{
		printf("%d\n", l->n);
		l = l->next;
		n_nodes++;
	}
	return (n_nodes);
}

