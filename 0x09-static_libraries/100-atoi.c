#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 * will be an ineger into a string
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
int a = 0, b = 0, c = 0, dot = 0, e = 0, f = 0;
while (s[dot] != '\0')
dot++;
while (a < dot && e == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
f = s[a] - '0';
if (b % 2)
f = -f;
c = c * 10 + f;
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
e = 0;
}
a++;
}
if (e == 0)
return (0);
return (c);
}
