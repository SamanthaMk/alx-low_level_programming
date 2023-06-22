#include "main.h"

/**
 * print_most_numbers - Code prints numbers from 0 to 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
int g;

for (g = 0; g <= 9; g++)
{
if (g != 2 && g != 4)
{
_putchar(g + '0');
_putchar('\n');
}
}
}
