#include <stdio.h>

/**
 * main - function to display the sizes of data types
 * Return: always 0
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));
	printf("Size of a int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(m));

	return (0);
}
