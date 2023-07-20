#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Codes function prints strings
  * followed by a new line.
 * @separator: This is string to be printed between strings.
 * @n: The number of strings passed to the function.
  * If separator is NULL, it is not printed.
 *  If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int m;
va_list sp;
char *str;
va_start(sp, n);
for (m = 0; m < n; m++)
{
str = va_arg(sp, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(sp);
}
