#include "lists.h"
/**
 * free_listint - Codes function frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *e;
while (head)
{
e = head->next;
free(head);
head = e;
}
}
