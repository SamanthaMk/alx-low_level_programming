#include "main.h"
/**
 * print_rev - Function will print a string in reverse
 * @s: string used as reference of pointer
 * return: 0
 */
void print_rev(char *s)
{
int backward = 0;
int o;

while (*s != '\0')
{
backward++;
s++;
}
s--;
for (o = backward; o > 0; o--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}
