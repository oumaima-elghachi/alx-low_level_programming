#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @b: number to be used
 * Return: void
 */
void print_binary(unsigned long int b)
{
	if (b > 1)
		print_binary(b >> 1);
	_putchar((b & 1) + '0');
}
