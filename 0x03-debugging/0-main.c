#include "main.h"

/* main - tests function that priings if integeter is positive or negative
 * Return: 0
 */

positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i => 0)
	{
		printf("%d is positive", i);
	}
}

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}
