#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is a program that prints its own opcodes
 * In its own main function.
 * @argc:This  number of arguments
 * @argv: array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int xp, bytes;
char *ar;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
ar = (char *)main;
for (xp = 0; xp < bytes; xp++)
{
if (xp == bytes - 1)
{
printf("%02hhx\n", ar[xp]);
break;
}
printf("%02hhx ", ar[xp]);
}
return (0);
}
