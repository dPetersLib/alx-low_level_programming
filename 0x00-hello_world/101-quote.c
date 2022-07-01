#include <stdio.h>

/**
 * main - prints an output to the standard error
 * Return: 1 for failure
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19", 39, 1, stderr);
	return (1);
}
