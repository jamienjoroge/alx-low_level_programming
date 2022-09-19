#include "main.h"
/**
 *_puts - prints string on screen
 *@str: string to be printed
 *Retrun:void
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
