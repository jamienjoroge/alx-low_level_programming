#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: returns void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int results = x * y;

			if (results < 10)
			{
			_putchar('0' + results);
			else
			{
				_putchar((results / 10) + '0');
				_putchar((results % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
