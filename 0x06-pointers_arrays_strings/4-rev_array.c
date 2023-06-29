#include "main.h"
/**
* reverse_array - Function that reverses the content of an array of integers
* @a: array
* @n: number of elements of array
* Return: void
*/
void reverse_array(int *a, int n)
{
int u;
int r;
for (u = 0; u < n--; u++)
{
r = a[u];
a[u] = a[n];
a[n] = r;
}
}
