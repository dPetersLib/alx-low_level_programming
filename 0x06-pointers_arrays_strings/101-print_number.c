#include "main"

/**
 * print_number - function that prints an integer
 * @n: integer to print
 * Return: return
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
