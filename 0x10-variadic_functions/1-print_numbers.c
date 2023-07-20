#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - The codes function prints numbers
 * followed by a new line.
 * @separator: This string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * If separator is NULL, don’t print it
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list  px;
unsigned int q;
va_start(px, n);
for (q = 0; q < n; q++)
{
printf("%d", va_arg(px, int));

if (q != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(px);
}
