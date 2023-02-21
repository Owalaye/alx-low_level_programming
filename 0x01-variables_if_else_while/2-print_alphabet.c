#include <stdio.h>
/**
 * main - upper case
 * Return: Always (success)
 */
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	putchar(small);
	putchar('\n');

	return (0);
}
