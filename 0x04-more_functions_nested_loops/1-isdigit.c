#include "main.h"
/**
 *_isdigit - checks if an int is a digit
 *@c: character to be determined
 *Return: Returns 1 if its a digit
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
