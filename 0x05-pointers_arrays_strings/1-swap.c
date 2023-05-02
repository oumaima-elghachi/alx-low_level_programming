#include <stdio.h>

/**
 * swap_int - Swap the values of two integers.
 * @a: the first integer to be swapped.
 * @b: the seconde integer to be swapped.
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
