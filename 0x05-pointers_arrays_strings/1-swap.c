#include "main.h"
/**
 *swap_int - swaps two numbers
 *@a: first number
 *@b: second number
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
