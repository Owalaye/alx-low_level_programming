#include <stdio.h>
/**
 * main - ommit
 * Return: Always (success)
 */
int main(void)
{
	char k, e, q;

	e = 'e';
	q = 'q';

	for (k = 'a'; k <= 'z'; k++)
	{
	if (k != e && k != q)
	putchar(k);
	}
	putchar('\n');

	return (0);
}
