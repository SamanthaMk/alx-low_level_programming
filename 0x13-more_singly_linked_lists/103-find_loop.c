#include "lists.h"

/**
 * find_listint_loop - Code function finds the loop in a linked list
 * @head: linked list to search for
 *only declare a maximum of two variables in your function
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *lw = head;
listint_t *st = head;
if (!head)
return (NULL);
while (lw && st && st->next)
{
st = st->next->next;
lw = lw->next;
if (st == lw)
{
lw = head;
while (lw != st)
{
lw = lw->next;
st = st->next;
}
return (st);
}
}
return (NULL);
}
