#include "lists.h"
/**
 * delete_nodeint_at_index - Code deletes a node in a linked list at an index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *Index starts at 0
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *emp = *head;
listint_t *now = NULL;
unsigned int l = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(emp);
return (1);
}
while (l < index - 1)
{
if (!emp || !(emp->next))
return (-1);
emp = emp->next;
l++;
}
now = emp->next;
emp->next = now->next;
free(now);
return (1);
}
