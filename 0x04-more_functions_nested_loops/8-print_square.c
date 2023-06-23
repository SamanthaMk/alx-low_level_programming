#include "main.h"

/**
 * print_square - this code prints a square, followed by a new line.
 * @size: The size of the square.
 * Return: Value 0
 */
void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
return;
}
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
