#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This codes function returns sum of all paramters.
 * @n: Represents number of paramters passed to function.
 * Return: resulting sum.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int k;
int sum = 0;
va_list a;
va_start(a, n);
for (k = 0; k < n; k++)
sum += va_arg(a, int);
va_end(a);
return (sum);
}
