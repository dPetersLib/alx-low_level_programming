#include "main.h"

/**
 * _isupper - funtion to chekc for uppercase character
 * @c: character to evaluate
 * Return: 1 if character is uppercase, zero otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
