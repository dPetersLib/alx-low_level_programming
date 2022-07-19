#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: source string
 * @b: the constat byte for filling
 * @n: lenght of buffer
 * Return: a pointer tothe memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
