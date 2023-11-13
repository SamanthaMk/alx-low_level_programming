#include "main.h"
/**
 * _puts - Function that prints a string
 * @str: pointer to the string
 * Returns: string and new line
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
