#include <stdio.h>

/**
 * main - prints the english alphabets in lowercase and then in 
 * in upper case
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
