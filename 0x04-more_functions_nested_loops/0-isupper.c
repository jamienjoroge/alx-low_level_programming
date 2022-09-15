#include "main.h"
/**
 *_isupper - checks if is supper
 *@c: character to be determined
 *Return: returns an integer
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
