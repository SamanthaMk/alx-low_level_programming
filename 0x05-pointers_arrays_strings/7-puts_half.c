#include "main.h"
/**
 * puts_half - The code that prints half of a string
 * followed by a new line
 * @str: inputs the string
 * Return: half of input
 */
void puts_half(char *str)
{
int h, n, string;

string = 0;

for (h = 0; str[h] != '\0'; h++)
string++;

n = (string / 2);

if ((string % 2) == 1)
n = ((string + 1) / 2);

for (h = n; str[h] != '\0'; h++)
_putchar(str[h]);
_putchar('\n');
}
