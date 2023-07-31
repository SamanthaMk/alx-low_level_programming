#include "lists.h"
/**
 * get_nodeint_at_index - Code returns the node at certain index in a link list
 * @head: first node in the linked list
 * @index: index of the node to return
 *where index is the index of the node, starting at 0
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int z = 0;
listint_t *tem = head;
while (tem && z < index)
{
tem = tem->next;
z++;
}
return (tem ? tem : NULL);
}
