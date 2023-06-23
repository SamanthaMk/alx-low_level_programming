#include "main.h"

/**
 * print_diagonal -Code draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *Return: Value 0
 */
void print_diagonal(int n)
{
int e, f;
if (n <= 0)
{
_putchar('\n');
return;
}
for (e = 0; e < n; e++)
{
for (f = 0; f < e; f++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
