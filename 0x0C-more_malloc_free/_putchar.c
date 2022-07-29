#include "main.h"
#include <unistd.h>

/**_putchar - writes the character c to stdout
 * @c: The chracter to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return (write(i, &c, 1));
}
