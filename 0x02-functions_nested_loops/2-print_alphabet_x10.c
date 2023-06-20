#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * Return: 0
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
