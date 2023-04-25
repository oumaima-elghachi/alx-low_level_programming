#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;
	int m;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (l = 50; l < 58; l++)
		{
			if (l > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
