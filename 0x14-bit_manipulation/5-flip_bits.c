#include "main.h"
/**
 * flip_bits - Function counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int ix, cal = 0;
unsigned long int ent;
unsigned long int exc = n ^ m;
for (ix = 63; ix >= 0; ix--)
{
ent = exc >> ix;
if (ent & 1)
cal++;
}
return (cal);
}
