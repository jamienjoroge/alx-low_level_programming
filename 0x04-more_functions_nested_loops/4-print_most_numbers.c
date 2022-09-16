#include "main.h"
/**
 *print_most_numbers - prints numbers except 2,4
 *
 *Return: returns void
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
	{
		if (num == '2' || num == '4')
		{
			num++;
		}
		_putchar(num);
	}
}
