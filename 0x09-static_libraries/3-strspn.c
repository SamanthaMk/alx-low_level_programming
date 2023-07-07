#include "main.h"
/**
 * _strspn -Has function that gets the length of a prefix substring
 * @s: returns number of bytes in the initial segment of s
 * @accept: input consist of bytes
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int v;

while (*s)
{
for (v = 0; accept[v]; v++)
{
if (*s == accept[v])
{
n++;
break;
}
else if (accept[v + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
