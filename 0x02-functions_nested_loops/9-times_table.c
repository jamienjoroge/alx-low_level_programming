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
			_putchar((x * y));
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
