#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet 10*
 *Description: Prints the alphabet 10 times
 *@char - argument for _putchar
 *
 *Return: Void
 */
void print_alphabet_x10(void)
{
	int letters;
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
