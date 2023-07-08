#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * int value m
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int m;
for (m = 0; m < argc; m++)
{
printf("%s\n", argv[m]);
}
return (0);
}
