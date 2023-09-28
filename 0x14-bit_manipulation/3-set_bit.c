#include "main.h"
/**
 * set_bit -Code sets value of a bit to 1 at a given index
 * @n:number that will be passed by a pointer
 * @index:index of the bit to set to 1
 * Return:1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int xp;

	if (index > 64)
	return (-1);

	for (xp = 1; index > 0; index--, xp *= 2)
		;
	*n += xp;

	return (1);
}
