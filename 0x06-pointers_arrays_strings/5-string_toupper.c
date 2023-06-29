#include "main.h"
/**
* string_toupper -This function changes all lowercase to uppercase
* @n: pointer
* int value is l
* Return: n
*/
char *string_toupper(char *n)
{
int l;
l = 0;
while (n[l] != '\0')
{
if (n[l] >= 'a' && n[l] <= 'z')
n[l] = n[l] - 32;
l++;
}
return (n);
}
