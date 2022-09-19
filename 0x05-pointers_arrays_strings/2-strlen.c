#include "main.h"
/**
 *_strlen -gets the length of a string
 *@s: character to be detrmined
 *Return: returns an int lentgh of string
 */
int _strlen(char *s)
{
	int size;

	while (s[size])
	{
		size++;
	}
	return (size);
}
