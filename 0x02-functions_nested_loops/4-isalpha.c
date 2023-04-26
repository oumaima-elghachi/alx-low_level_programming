#include "main.h"

/**
 *_isalpha - function that checks for lowercase character
 * @c: The return value.
 *
 * Return: 1 for the lowercase and 0 for the capital
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
