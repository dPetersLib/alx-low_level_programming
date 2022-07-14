#include "main"

/**
 * print_number - function that prints an integer
 * _putchar - prints a character
 * @c: character to print
 * @n: integer to print
 * Return: return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
