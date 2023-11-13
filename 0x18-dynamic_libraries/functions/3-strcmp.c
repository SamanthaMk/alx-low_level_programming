#include "main.h"
/**
* _strcmp - The function will compare string values
* @s1: input value
* @s2: input value
* int value is g
* Return: s1[x] - s2[x]
*/
int _strcmp(char *s1, char *s2)
{
int g;
g = 0;
while (s1[g] != '\0' && s2[g] != '\0')
{
if (s1[g] != s2[g])
{
return (s1[g] - s2[g]);
}
g++;
}
return (0);
}
