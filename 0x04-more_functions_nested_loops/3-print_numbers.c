#include "main.h"

/**
 * print_numbers - func that checks for digits 0 - 9
 * Return: 0 (Success)
 */
void print_numbers(void);
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
