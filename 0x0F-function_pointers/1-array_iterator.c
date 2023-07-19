#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This code executes a function given as a parameter
 * @array: element of an array
 * @size: is the size of the array
 * @action: pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array == NULL || action == NULL)
return;

for (x = 0; x < size; x++)
{
action(array[x]);
}
}
