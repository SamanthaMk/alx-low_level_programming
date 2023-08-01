#include "lists.h"
/**
 * free_listint_safe - Codes function frees a linked list
 * @h: pointer to the first node in the linked list
 *This function can free lists with a loop
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t ln = 0;
int df;
listint_t *te;
if (!h || !*h)
return (0);
while (*h)
{
df = *h - (*h)->next;
if (df > 0)
{
te = (*h)->next;
free(*h);
*h = te;
ln++;
}
else
{
free(*h);
*h = NULL;
ln++;
break;
}
}
*h = NULL;
return (ln);
}
