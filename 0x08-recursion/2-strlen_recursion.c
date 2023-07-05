#include "main.h"
/**
 * _strlen_recursion - Code returns the length of a string.
 * @s: The string to be measured.
 * r: int value
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
int r = 0;
if (*s)
{
r++;
r += _strlen_recursion(s + 1);
}
return (r);
}
