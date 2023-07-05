#include "main.h"
/**
 * factorial - Function will return factorial value
 * @n: factorial number to be returned
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
