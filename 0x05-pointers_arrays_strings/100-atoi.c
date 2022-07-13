#include "main.h"

/**
 * _stoi - convert string to an integer.
 * @a: pointer to a character string.
 *
 * Return: void.
 */
int _stoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = i;
	while (*temp != '\0' && (*tem < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}	
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
