#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks if a string contains only digits
 * @s: String to be evaluated
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
int p = 0;
while (s[p])
{
if (s[p] < '0' || s[p] > '9')
return (0);
p++;
}
return (1);
}
/**
 * _strlen - Returns the length of a string
 * @s: String to be evaluated
 * Return: The length of the string
 */
int _strlen(char *s)
{
int p = 0;
while (s[p] != '\0')
{
p++;
}
return (p);
}
/**
 * errors - Handles errors and exits with status 98
 */
void errors(void)
{
printf("%s\n", ERR_MSG);
exit(98);
}
/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int num1, num2, num, x, carry, digit1, digit2, *result, a = 0;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();
s1 = argv[1];
s2 = argv[2];
num1 = _strlen(s1);
num2 = _strlen(s2);
num = num1 + num2 + 1;
result = malloc(sizeof(int) * num);
if (!result)
return (1);
for (x = 0; x <= num1 + num2; x++)
result[x] = 0;
for (num1 = num1 - 1; num1 >= 0; num1--)
{
digit1 = s1[num1] - '0';
carry = 0;
for (num2 = _strlen(s2) - 1; num2 >= 0; num2--)
{
digit2 = s2[num2] - '0';
carry += result[num1 + num2 + 1] + (digit1 *digit2);
result[num1 + num2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[num1 + num2 + 1] += carry;
}
for (x = 0; x < num1 + num2 + 1; x++)
{
if (result[x])
a = 1;
if (a)
putchar(result[x] + '0');
}
if (!a)
putchar('0');
putchar('\n');
free(result);
return (0);
}
