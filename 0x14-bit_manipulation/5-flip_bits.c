#include "main.h"
#include <stdio.h>
/**
 * flip_bits -Code counts the number of bits to change
 * @n:first number
 * @m:second number
 * Return: number of bits that was needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int di;
	int count;

	di = n ^ m;
	count = 0;

	while (di)
	{
	count++;
	di &= (di - 1);
	}
return (count);
}
