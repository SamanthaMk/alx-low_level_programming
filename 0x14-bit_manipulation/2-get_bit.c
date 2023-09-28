#include "main.h"
#include <stdio.h>
/**
 * get_bit - Code returns the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int sp;
if (index > 64)
return (-1);
sp = n >> index;
return (sp & 1);
}
