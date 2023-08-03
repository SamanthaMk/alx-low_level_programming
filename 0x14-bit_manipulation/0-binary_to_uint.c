#include "main.h"
/**
 * binary_to_uint - Code's function converts a binary digit to unsigned int
 * @b: string containing the binary number
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int jx;
unsigned int cv = 0;
if (!b)
return (0);
for (jx = 0; b[jx]; jx++)
{
if (b[jx] < '0' || b[jx] > '1')
return (0);
cv = 2 * cv + (b[jx] - '0');
}
return (cv);
}
