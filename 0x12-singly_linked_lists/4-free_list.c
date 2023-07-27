#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Codes function frees a linked list
 * @head: list_t list to be freed
* Return: 0
 */
void free_list(list_t *head)
{
list_t *gen;
while (head)
{
gen = head->next;
free(head->str);
free(head);
head = gen;
}
}
