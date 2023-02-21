#include <stdio.h>
/**
 * main - combine uppercae and lower case
 * Return: Always (success)
 */
int main(void)
{

	char u;
	char l;

	for (u = 'A'; u <= 'Z'; u++)
	putchar(u);
	for (l = 'a'; l <= 'z'; l++)
	putchar(l);
	putchar('\n');

	return (0);
}
