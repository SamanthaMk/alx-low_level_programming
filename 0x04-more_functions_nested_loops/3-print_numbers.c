#include "main.h"

/**
 * print_numbers - Code prints numbers fromm 0 to 9 follows a new line
 * Return: Always 0
 */

void print_numbers(void)
{
int q;

for (q = '0'; q <= '9'; q++)
{
_putchar(q);
}
_putchar('\n');
}
