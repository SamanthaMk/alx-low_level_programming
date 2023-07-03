#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum7, sum8, i;
sum7 = 0;
sum8 = 0;

for (i = 0; i < size; i++)
{
sum7 = sum7 + a[i * size + i];
}

for (i = size - 1; i >= 0; i--)
{
sum8 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum7, sum8);
}
