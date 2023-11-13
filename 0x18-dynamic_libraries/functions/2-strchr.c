#include "main.h"
/**
 * _strchr - This code has a function that locates a character in a string.
 * @s: input
 * @c: input
 * int value is e
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int e = 0;
for (; s[e] >= '\0'; e++)
{
if (s[e] == c)
return (&s[e]);
}
return (0);
}
