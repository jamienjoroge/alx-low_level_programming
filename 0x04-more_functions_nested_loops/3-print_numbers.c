#include "main.h"
/**
 *print_numbers - prints zero to nine
 *
 *Return: ruturns void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		int j = i % 10;
		_putchar(j + '0');
	}
	_putchar('\n');
}
