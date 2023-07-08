#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - This code searches string for digit
 * @str: array str
 * Return: Always 0
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int digit;
digit = 0;
while (digit < strlen(str)) /*digit string*/
{
if (!isdigit(str[digit])) /*check if str there are digit*/
{
return (0);
}
digit++;
}
return (1);
}
/**
 * main - This code prints name of the program
 * @argc: Digit arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int digit;
int str_to_int;
int sum = 0;
digit = 1;
while (digit < argc) /*Goes through the whole array*/
{
if (check_num(argv[digit]))
{
str_to_int = atoi(argv[digit]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
digit++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
