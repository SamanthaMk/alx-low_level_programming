#include "main.h"
/**
 * print_sign - This code outputs the sign of a number
 * @n: is the parameters
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero,-1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if(n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}        	
