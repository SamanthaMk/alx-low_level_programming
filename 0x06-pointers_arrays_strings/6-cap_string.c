#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int caps = 0;

	while (str[caps])
	{
		while (!(str[caps] >= 'a' && str[caps] <= 'z'))
			caps++;

		if (str[caps - 1] == ' ' ||
		    str[caps - 1] == '\t' ||
		    str[caps - 1] == '\n' ||
		    str[caps - 1] == ',' ||
		    str[caps - 1] == ';' ||
		    str[caps - 1] == '.' ||
		    str[caps - 1] == '!' ||
		    str[caps - 1] == '?' ||
		    str[caps - 1] == '"' ||
		    str[caps - 1] == '\'' ||
		    str[caps - 1] == '(' ||
		    str[caps - 1] == ')' ||
		    str[caps - 1] == '{' ||
		    str[caps - 1] == '}' ||
		    caps == 0)
		{
			str[caps] -= 32;
		}
		caps++;
	}
	return (str);
}
