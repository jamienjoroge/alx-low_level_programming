#include "main.h"
/**
 *print_last_digit - print last digit of num
 *@r: num to get last digit
 *
 *Return: returns an int
 */
int print_last_digit(int r)
{
	int last = r % 10;

	if (r < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
