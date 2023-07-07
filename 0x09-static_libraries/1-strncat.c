#include "main.h"
/**
* _strncat - The result of this code concatenates two strings
* using n bytes from src
* @dest: input value
* @src: input value
* @n: n of bytes
*int values d and s
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int d;
int s;
d = 0;
while (dest[d] != '\0')
{
d++;
}
s = 0;
while (s < n && src[s] != '\0')
{
dest[d] = src[s];
d++;
s++;
}
dest[d] = '\0';
return (dest);
}
