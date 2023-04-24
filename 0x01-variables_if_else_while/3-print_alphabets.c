#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char C;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
