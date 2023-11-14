#include <unistd.h>

/**
 * _putchar - prints to so
 * @c: chsr vsriable
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
