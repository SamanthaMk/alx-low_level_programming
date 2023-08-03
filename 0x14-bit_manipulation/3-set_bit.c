#include "main.h"
/**
 * set_bit - Codes function sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * index is the index, starting from 0 of the bit want to set
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
