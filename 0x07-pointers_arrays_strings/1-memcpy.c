#include "main.h"
/**
 *_memcpy -This code has a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *int values p and g
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p = 0;
int g = n;
for (; p < g; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
