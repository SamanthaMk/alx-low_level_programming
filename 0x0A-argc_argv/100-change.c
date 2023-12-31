#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This code prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * int values num ,p,results
 * Return: 0 (Success), 1 (E rror)
 */
int main(int argc, char *argv[])
{
	int num, p, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < 5 && num >= 0; p++)
	{
		while (num >= coins[p])
		{
			result++;
			num -= coins[p];
		}
	}

	printf("%d\n", result);
	return (0);
}
