#include "main.h"

/**
 * swap_int - function that takes two int pointers as parameters and
 * and swap their values
 *
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
