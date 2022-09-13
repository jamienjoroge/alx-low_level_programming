#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if alphabet is lower
 *Description: Checks case
 *@c: input for islower
 *Return: returns an int result of islower
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
