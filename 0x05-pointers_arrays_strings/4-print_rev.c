#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}

	for (i = s[i - 1]; i <= 0; i--)
	{
		_putchar(s[i - 1]);
	}
}
