#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
}

#endif /* MAIN_H */
