#include "function_pointers.h"
/**
 * int_index - This code has a function that searches for an integer
 * it will return index place if comparison = true, else -1
 * @array:Is the array
 * @size: size of elements in array
 * @cmp: is a pointer to function to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int sh;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (sh = 0;  sh < size; sh++)
{
if (cmp(array[sh]))
return (sh);
}
return (-1);
}
