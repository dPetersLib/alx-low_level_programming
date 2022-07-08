#include "main.h"

/**
 * print_numbers -prints the numbers fm 0 to 9
 * Return: always 0;
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar("\n");
}
