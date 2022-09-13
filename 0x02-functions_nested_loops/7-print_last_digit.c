#include "main.h"
/**
 *print_last_digit - print last digit of num
 *@r: num to get last digit
 *
 *Return: returns an int
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('r');
	return (r % 10);
}
