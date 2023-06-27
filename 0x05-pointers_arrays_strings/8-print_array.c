#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: Array name
 * @n: Number of elements to print
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n - 1; q++)
	{
		printf("%d, ", a[q]);
	}

	if (q == n - 1)
	{
		printf("%d", a[q]);
	}

	printf("\n");
}
