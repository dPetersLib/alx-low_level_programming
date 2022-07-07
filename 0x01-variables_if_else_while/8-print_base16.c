#include <stdio.h>

/**
 * main - prints digits fro 0-9 using putchar function
 * Return: always 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
