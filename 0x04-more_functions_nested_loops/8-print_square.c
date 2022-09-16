#include "main.h"
/**
 *print_square - prints square using hash
 *@size: size of the square
 *Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
