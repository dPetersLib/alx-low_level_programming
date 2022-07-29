#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: sizee of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
