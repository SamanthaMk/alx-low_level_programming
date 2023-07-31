#include "lists.h"
/**
 * pop_listint - Codes function deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * and returns the head node’s data (n).
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *mp;
int del;
if (!head || !*head)
return (0);
del = (*head)->n;
mp = (*head)->next;
free(*head);
*head = mp;
return (del);
}
