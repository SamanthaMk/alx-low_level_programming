#include "lists.h"
/**
 * add_nodeint - Code adds a new nodes at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * the address of the new element, or NULL if it failed
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *wep;
wep = malloc(sizeof(listint_t));
if (!wep)
return (NULL);
wep->n = n;
wep->next = *head;
*head = wep;
return (wep);
}
