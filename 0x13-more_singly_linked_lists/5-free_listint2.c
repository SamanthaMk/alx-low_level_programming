#include "lists.h"
/**
 * free_listint2 - Codes function frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *xp;
if (head == NULL)
return;
while (*head)
{
xp = (*head)->next;
free(*head);
*head = xp;
}
*head = NULL;
}
