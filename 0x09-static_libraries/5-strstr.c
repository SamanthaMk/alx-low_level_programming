#include "main.h"
/**
 * _strstr - Has a unction that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *n = haystack;
char *p = needle;
while (*n == *p && *p != '\0')
{
n++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
