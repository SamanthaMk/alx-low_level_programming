#include "main.h"
/**
 * char *_strcpy - Copies the string pointed to by  src
 * @dest: char type string
 * @src: copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
int y = 0;
int x = 0;

while (*(src + y) != '\0')
{
y++;
}
for ( ; x < y9-strcpy.c ; x++)
{
dest[x] = src[x];
}
dest[y] = '\0';
return (dest);
}
