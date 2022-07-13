#include "main.h"

/**
 * print_rev - function to print a reverse string
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int index;

	for (index =0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
