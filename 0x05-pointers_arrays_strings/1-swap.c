#include "main.h"
/**
 * swap_int -This code swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int exchange;

	exchange = *a;
	*a = *b;
	*b = exchange;
}
