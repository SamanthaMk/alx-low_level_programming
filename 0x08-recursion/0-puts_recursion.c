#include "main.h"
/**
 * _puts_recursion - Code has function that prints a string
 *@s: input value
 * Return: 0 Sucess
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
