#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: returns void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int results;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			results = a * b;
			if (b == 0)
			{
				_putchar('0' + results);
			}
			else if (results < 10)
			{
				_putchar(' ');
				_putchar('0' + results);
			}
			else
			{
				_putchar('0' + results / 10);
				_putchar('0' + results % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
