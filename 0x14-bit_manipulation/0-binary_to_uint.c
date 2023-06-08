#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - check if a string has only 0's and 1's
 * @a: string to be checked
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *a)
{
	if (a == NULL)
		return (0);
	while (*a)
	{
		if (*a != '1' && *a != '0')
			return (0);
		a++;
	}

	return (1);
}


/**
 * binary_to_uint - converts a binary to an unsigned int
 * @a: the binary number as a string
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *a)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!check_valid_string(a))
		return (0);
	while (a[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		decimal += ((a[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}

	return (decimal);
}
