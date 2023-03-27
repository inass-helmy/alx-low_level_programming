#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: pointer 1
 * @y: pointer 2
 * Return: void
 */

void swap_int(int *x, int *y)
{
	int a = *x;
	*x = *y;
	*y = a;
}
