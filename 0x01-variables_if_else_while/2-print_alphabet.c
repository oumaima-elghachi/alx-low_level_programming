#include <stdio.h>

/**
 * in the main function i use the putchar funchtion
 *
 * the return is 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
