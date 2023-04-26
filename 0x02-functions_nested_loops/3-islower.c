#include "main.h"

/**
 * function _islower - function that checks for lowercase character
 *
 * return value of '_islower' is 0 capital and 1 for lowercase
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
