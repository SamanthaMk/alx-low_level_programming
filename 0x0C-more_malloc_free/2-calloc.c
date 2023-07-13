#include <stdlib.h>
#include "main.h"
/**
 * *_memset - This code function allocates memory for an array, using malloc
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * If malloc fails, then _calloc returns NULL
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int mc;
for (mc = 0; mc < n; mc++)
{
s[mc] = b;
}
return (s);
}
/**
 * *_calloc - function allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
