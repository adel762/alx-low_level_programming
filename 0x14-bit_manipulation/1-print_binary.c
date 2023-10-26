#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (t = n, shifts = 0; (t >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
