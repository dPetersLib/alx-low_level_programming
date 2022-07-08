#include "main.h"

/**
 * _isdigit - check for a digit from 0 to 9
 * @c: digit to enumerate
 * Return: 1 if c is a digt, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
