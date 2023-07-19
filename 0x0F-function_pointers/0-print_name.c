#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This code will print the name using pointer to function
 * @name: Is a string that is to be add
 * @f: This is a the pointer to function
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
