#include <unistd.h>
/**
 * main - _putchar
 * Return: Always (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
