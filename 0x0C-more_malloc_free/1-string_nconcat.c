#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - This code concatenates two strings.
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *if NULL is passed, treat it as an empty string
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int p = 0, q = 0, r1 = 0, r2 = 0;
while (s1 && s1[r1])
r1++;
while (s2 && s2[r2])
r2++;
if (n < r2)
s = malloc(sizeof(char) * (r1 + n + 1));
else
s = malloc(sizeof(char) * (r1 + r2 + 1));
if (!s)
return (NULL);
while (p < r1)
{
s[p] = s1[p];
p++;
}
while (n < r2 && p < (r1 + n))
s[p++] = s2[q++];
while (n >= r2 && p < (r1 + r2))
s[p++] = s2[q++];
s[p] = '\0';
return (s);
}
