#include "lists.h"
/**
 * insert_nodeint_at_index - Function inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int ip;
listint_t *nw;
listint_t *mep = *head;
nw = malloc(sizeof(listint_t));
if (!nw || !head)
return (NULL);
nw->n = n;
nw->next = NULL;
if (idx == 0)
{
nw->next = *head;
*head = nw;
return (nw);
}
for (ip = 0; mep && ip < idx; ip++)
{
if (ip == idx - 1)
{
nw->next = mep->next;
mep->next = nw;
return (nw);
}
else
mep = mep->next;
}
return (NULL);
}
