#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The return value.
 *
 * Return: 1 for the lowercase and 0 for the capital
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
