#include <stdio.h>
#include <math.h>
/**
 * main - Finds and prints the largest prime factor of the number 612852475143,
 *        followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int n = 612852475143;
	long int max = -1;
	long int P;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (P = 3; P <= sqrt(n); P += 2)
	{
		while (n % P == 0)
		{
			max = P;
			n /= P;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
