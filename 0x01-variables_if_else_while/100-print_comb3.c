#include <stdio.h>

/**
 * main - entry point of my code
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48, a = 48;

	while (i < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (i != a && i < a)
			{
				putchar(i);
				putchar(a);

				if (!(i == 56 && a == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
