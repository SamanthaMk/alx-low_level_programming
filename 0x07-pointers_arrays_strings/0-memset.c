#include "main.h"
/**
 * _memset - This code will fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *  int value is f
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int f = 0;
for (; n > 0; f++)
{
s[f] = b;
n--;
}
return (s);
}
