#ifndef MAIN2_H
#define MAIN2_H

#include <stdio.h>

void print_alphabet_x10()
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			putchar(i);
		}
		putchar('\n');
	}
}

#endif /* MAIN2_H */
