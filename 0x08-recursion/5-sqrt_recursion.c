#include "main.h"
/**
 * _sqrt_recursion - Function returns natural sqaure root of a number
 * @n: number sqaure root
 * Return: Result of square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return ( 0);
}
/**
 * actual_sqrt_recursion - recursion to find the natural
 * square root of a number
 * @n: number to calculate sqaure root
 * @p: iterator value
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int p)
{
if (p * p > n)
return (-1);
if (p * p == n)
return (p);
return (actual_sqrt_recursion(n, p + 1));
}
