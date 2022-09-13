#include "main.h"
/**
 *_isalpha - Checks if is alphabet
 *@c: character
 *
 *Return: returns an integer
 */
int _isalpha(int c)
{
if ((c > 64 && c < 122) || (c > 96 && c < 123))
{
return (1);
}
else
{
return (0);
}
}
