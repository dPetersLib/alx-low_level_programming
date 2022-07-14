#include <unistd.h>

/**
 * _putchar - writes the charcter to stdout
 * @c: The character
 *
 * Return: 1 if success, -1 if otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
