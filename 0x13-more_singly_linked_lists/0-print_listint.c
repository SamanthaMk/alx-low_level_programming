#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Codes function prints all the elements of a link list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t g = 0;
while (h)
{
printf("%d\n", h->n);
g++;
h = h->next;
}
return (g);
}
