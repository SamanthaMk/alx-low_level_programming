#include "main.h"
int search_pali(char *s, int pw, int x);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Code's function searchs if string is palindrome
 * @s: This is a string to reverse
 * An empty string will be a palindrome
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (search_pali(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - This function returns the length of a string
 * @s: string to calculate the length of
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * search_pali - Search characters recursively for palindrome
 * @s: string to check
 * @pw: This is iterator
 * @x: This is the length of the strings
 * Return: 1 if palindrome, 0 if not
 */
int search_pali(char *s, int pw, int x)
{
if (*(s + pw) != *(s + x - 1))
return (0);
if (pw >= x)
return (1);
return (search_pali(s, pw + 1, x - 1));
}
