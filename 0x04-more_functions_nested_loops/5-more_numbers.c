#include "main.h"

/**
 * more_numbers - Code prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int q, r;

for (q = 1; q <= 10; q++)
{
for (r = 0; r <= 14; r++)
{
if (r >= 10)
_putchar('1');
_putchar (r % 10 + '0');
}
_putchar('\n');
}
}
