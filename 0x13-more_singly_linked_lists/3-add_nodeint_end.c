#include "lists.h"

/**
 * add_nodeint_end -Function adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *the address of the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *w;
listint_t *tp = *head;
w = malloc(sizeof(listint_t));
if (!w)
return (NULL);
w->n = n;
w->next = NULL;
if (*head == NULL)
{
*head = w;
return (w);
}
while (tp->next)
tp = tp->next;
tp->next = w;
return (w);
}