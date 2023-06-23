#include "main.h"

/**
 * print_triangle - Code prints a triangle, followed by a new line.
 * @size: Size of the triangle.
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, t;

		for (s = 1; s <= size; s++)
		{
			for (t = s; t < size; t++)
			{
				_putchar(' ');
			}

			for (t = 1; t <= s; t++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
