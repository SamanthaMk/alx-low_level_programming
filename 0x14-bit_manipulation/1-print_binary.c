#include "main.h"
/**
 * print_binary - Code prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int pi, cal = 0;
unsigned long int ent;
for (pi = 63; pi >= 0; pi--)
{
ent = n >> pi;
if (ent & 1)
{
_putchar('1');
cal++;
}
else if (cal)
_putchar('0');
}
if (!cal)
_putchar('0');
}
