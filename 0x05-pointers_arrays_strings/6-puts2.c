#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
int x = 0;
while (str[x]  !='\0')
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
x++;
}
_putchar('\n');
}
