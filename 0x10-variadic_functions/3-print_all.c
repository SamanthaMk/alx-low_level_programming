#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - This codes functions that prints anything
 * @format:This list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int fp = 0;
	char *str, *sp = "";

	va_list lit;

	va_start(lit, format);

	if (format)
	{
		while (format[fp])
		{
			switch (format[fp])
			{
				case 'c':
					printf("%s%c", sp, va_arg(lit, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(lit, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(lit, double));
					break;
				case 's':
					str = va_arg(lit, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					fp++;
					continue;
			}
			sp = ", ";
			fp++;
		}
	}

	printf("\n");
	va_end(lit);
}
