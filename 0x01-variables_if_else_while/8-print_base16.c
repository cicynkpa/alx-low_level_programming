#include <stdio.h>

/**
 * main - entry point of my codes
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
