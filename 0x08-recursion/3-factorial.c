#include "main.h"
/**
 *factorial - prints the factorial of any num
 *@n: number to work with
 *
 *Return: returns an int
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}
