
#include "main.h"
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *  is int value is c
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}