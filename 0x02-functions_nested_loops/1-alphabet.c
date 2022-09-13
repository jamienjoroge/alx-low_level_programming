#include "main.h"
/**
 *main - Entry point
 *@char - Parameter for _puctchar
 *Description: Printing the alphabet using _putchar
 *
 *Return: Always returns 0
 */
int main(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	return (0);
}
