#include "main.h"

/**
 * print_alphabet_x10 - returns alphabet 10 times, in lowercase.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
     char letter;
     int q;
     q = 0;
while (q < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
q++;
}


}
