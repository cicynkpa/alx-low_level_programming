#include <stdio.h>

/**
 * main - entry point of my codes
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48, a = 48, b = 48;

	while (i < 58)
	{
		a = 48;
		while (a < 58)
		{
			b = 48;
			while (b < 58)
			{
				if (i != a && a != b && i != b && i < a && a < b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
					if (!(i == 55 && a == 56 && b == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b++;
			}
			a++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
