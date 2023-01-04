#include <unistd.h>

/**
 * _putchar - write the charcter c to tdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1nis returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
