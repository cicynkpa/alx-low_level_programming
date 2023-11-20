#include "main.h"
/**
 * _isupper - check for upperca character
 * @c: prints the character c
 * Return: 1 (Success)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
