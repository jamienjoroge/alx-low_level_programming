#include "main.h"
/**
 *swap_int - swaps two numbers
 *@a: first number
 *@b: second number
 */
void swap_int(int *a, int *b)
{
	int y = *a;

	*a = b;
	*b = y;
}
