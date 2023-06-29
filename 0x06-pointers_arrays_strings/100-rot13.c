#include "main.h"
#include <stdio.h>
/**
* rot13 - encoder rot13
* @s: pointer to string params
* i and f are int values
* Return: *s
*/
char *rot13(char *s)
{
int i;
int f;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (f = 0; f < 52; f++)
{
if (s[i] == data1[f])
{
s[i] = datarot[f];
break;
}
}
}
return (s);
}
