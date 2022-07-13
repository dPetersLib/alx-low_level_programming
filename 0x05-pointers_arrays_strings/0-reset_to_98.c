#include "main.h"

/**
 * reset_to_98 - resets an int to 98
 * main - check the code
 * @*n: pointer to the int
 * Return: always 0
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);

	return (0);
}
