#include "main.h"

/**
 * print_numbers - func that checks for digits 0 - 9
 * Return: 0 (Success)
 */
void print_numbers(void);
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar("\n")
}
