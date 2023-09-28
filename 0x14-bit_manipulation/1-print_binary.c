#include "main.h"
#include <stdio.h>
/**
 * print_binary -Code prints binary representation of a number
 * @n:decimal number to print in binary
 */
void print_binary(unsigned long int n)
{
int xh;
unsigned long int tem;
	if (n == 0)
	{
		printf("0");
		return;
	}
for (tem = n, xh = 0; (tem >>= 1) > 0; xh++)
		;
for (; xh >= 0; xh--)
	{
		if ((n >> xh) & 1)
		printf("1");
		else
		printf("0");
	}
}
