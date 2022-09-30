#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: number
 * Return: 0
 */
void main(int argc, char* argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	else
		printf("%d \n");
}
