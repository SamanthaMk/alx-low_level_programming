#include "lists.h"
/**
 * sum_listint - Code calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *function returns the sum of all the data (n) of a listint_t
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sm = 0;
listint_t *t = head;
while (t)
{
sm += t->n;
t = t->next;
}
return (sm);
}
