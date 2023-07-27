#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Codes function adds a new node at the end of linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * str needs to be duplicated
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *inp;
list_t *pump = *head;
unsigned int len = 0;
while (str[len])
len++;
inp = malloc(sizeof(list_t));
if (!inp)
return (NULL);
inp->str = strdup(str);
inp->len = len;
inp->next = NULL;
if (*head == NULL)
{
*head = inp;
return (inp);
}
while (pump->next)
pump = pump->next;
pump->next = inp;
return (inp);
}
