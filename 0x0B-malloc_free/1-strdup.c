#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Codes function returns pointer to newly allocated space in memory
 * @str: char
  *function returns a pointer to a new string is a duplicate of the string
 * Return: Null
 */
char *_strdup(char *str)
{
char *al;
int b, c = 0;
if (str == NULL)
return (NULL);
b = 0;
while (str[b] != '\0')
b++;
al = malloc(sizeof(char) * (b + 1));
if (al == NULL)
return (NULL);
for (c = 0; str[c]; c++)
al[c] = str[c];
return (al);
}
