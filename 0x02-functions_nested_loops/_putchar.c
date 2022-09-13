#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: The character to print
 *
 * Return: On success 1.
 * On errir, -1 is returned, and errorno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
