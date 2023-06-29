#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int u, j, i;

	u = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (u < size)
	{
		j = size - u  < 10 ? size - u : 10;
		printf("%08x: ", u);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + u  + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + u  + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		u += 10;
	}
}
