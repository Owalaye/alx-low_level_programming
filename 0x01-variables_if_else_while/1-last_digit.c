#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The last digit
 * Return: Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastd;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n, lastd);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
