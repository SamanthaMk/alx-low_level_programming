#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Codes adds a new node at the beginning of a link list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * str needs to be duplicated
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *xp;
unsigned int len = 0;
while (str[len])
len++;
xp = malloc(sizeof(list_t));
if (!xp)
return (NULL);
xp->str = strdup(str);
xp->len = len;
xp->next = (*head);
(*head) = xp;
return (*head);
}
