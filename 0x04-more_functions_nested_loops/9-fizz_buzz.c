#include "main.h"
#include <stdio.h>
/**
 * fizzBuzz - Prints numbers from 1 to 100 according to the FizzBuzz rules.
 * Return: Value 0
 */
void fizzBuzz(void)
{
int w;
for (w = 1; w <= 100; w++)
{
if (w % 3 == 0 && w % 5 == 0)
printf("FizzBuzz ");
else if (w % 3 == 0)
printf("Fizz ");
else if (w % 5 == 0)
printf("Buzz ");
else
printf("%d ", w);
}
printf("\n");
}
