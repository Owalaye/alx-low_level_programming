#include <stdio.h>
/**
 * main - combine uppercae and lower case
 * Return: Always (success)
 */
int main(void)
{

	char u;
	char l;

	for (u = 'a'; u <= 'z'; u++)
	putchar(u);
	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');

	return (0);
}
