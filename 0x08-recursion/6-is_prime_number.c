#include "main.h"
int exact_prime(int n, int p);
/**
 * is_prime_number - Function returns 1 if input integer is prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (exact_prime(n, n - 1));
}
/**
 * exact_prime - calculates if a number is prime in recursion
 * @n: number to evaluate
 * @p: iterator
 * Return: 1 if n is prime, 0 if not
 */
int exact_prime(int n, int p)
{
if (p == 1)
return (1);
if (n % p == 0 && p > 0)
return (0);
return (exact_prime(n, p - 1));
}
