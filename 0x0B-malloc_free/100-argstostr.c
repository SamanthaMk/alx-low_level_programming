#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Code has function that concatenates all the arguments of code
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int e, f, g = 0, h = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (e = 0; e < ac; e++)
{
for (f = 0; av[e][f]; f++)
h++;
}
h += ac;
str = malloc(sizeof(char) * h + 1);
if (str == NULL)
return (NULL);
for (e = 0; e < ac; e++)
{
for (f = 0; av[e][f]; f++)
{
str[g] = av[e][f];
g++;
}
if (str[g] == '\0')
{
str[g++] = '\n';
}
}
return (str);
}
