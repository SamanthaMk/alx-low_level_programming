#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Code has a function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 *if NULL is passed, treat it as an empty string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, pc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = pc = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[pc] != '\0')
		pc++;
	conct = malloc(sizeof(char) * (i + pc + 1));

	if (conct == NULL)
		return (NULL);
	i = pc = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[pc] != '\0')
	{
		conct[i] = s2[pc];
		i++, pc++;
	}
	conct[i] = '\0';
	return (conct);
}
