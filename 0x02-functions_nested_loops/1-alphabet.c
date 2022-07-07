#include "main.h"

/**
 * main - prints the english alphabets in lowercase
 * from header file
 * Return: always 0
 */

print_alphabet()
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
