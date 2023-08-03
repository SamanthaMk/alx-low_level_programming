#include "main.h"
/**
 * get_bit - Codes function returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * index is the index, starting from 0 of the bit you want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitv;
if (index > 63)
return (-1);
bitv = (n >> index) & 1;
return (bitv);
}
