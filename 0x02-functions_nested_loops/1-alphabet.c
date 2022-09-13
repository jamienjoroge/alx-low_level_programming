#include "main.h"
/**
 *main - Entry point
 *@char - Parameter for _puctchar
 *Description: Printing the alphabet using _putchar
 *
 *Return: Always returns 0
 */
void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
