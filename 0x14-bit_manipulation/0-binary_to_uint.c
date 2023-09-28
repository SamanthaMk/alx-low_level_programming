#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint -Code converts binary number to unsigned int
 * @b:char string that contains binary num
 * Return:converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, p;
	int ln;

	if (b == NULL)
		return (0);

	for (ln = 0; b[ln]; ln++)
	{
		if (b[ln] != '0' && b[ln] != '1')
		return (0);
	}

	for (p = 1, t = 0, ln--; ln >= 0; ln--, p *= 2)
	{
		if (b[ln] == '1')
		t += p;
	}

	return (t);
}
