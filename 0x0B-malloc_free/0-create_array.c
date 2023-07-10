#include "main.h"
#include <stdlib.h>
/**
 * create_array - This code has function that creates an array of chars
 * @size: size of array
 * @c: char to be assigned
 * this program creates array of size size and assign char c
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int ap;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (ap = 0; ap < size; ap++)
str[ap] = c;
return (str);
}
