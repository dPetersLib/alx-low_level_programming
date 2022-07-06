#ifndef MAIN1_H
#define MAIN1_H

#include <stdio.h>

void print_alphabet()
{
	char i;
	
	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
}

#endif /* MAIN_H */
