#include "main.h"
/**
 *_puts - prints string on screen
 *@str: string to be printed
 *Retrun:void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
