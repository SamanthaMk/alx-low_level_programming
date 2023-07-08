#include <stdio.h>
#include "main.h"
/**
 * _atoi - This code creates and  converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int e, f, g, h,  j, num;
e = 0;
f = 0;
g = 0;
h = 0;
j = 0;
num = 0;
while (s[h] != '\0')
h++;
while (e < h && j == 0)
{
if (s[e] == '-')
++f;
if (s[e] >= '0' && s[e] <= '9')
{
num = s[e] - '0';
if (f % 2)
num = -num;
g = g * 10 + num;
j = 1;
if (s[e + 1] < '0' || s[e + 1] > '9')
break;
j = 0;
}
e++;
}
if (j == 0)
return (0);
return (g);
}
/**
 * main - This code will multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
