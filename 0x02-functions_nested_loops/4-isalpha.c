#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: char is lowecase or uppercase
 * Return: 1 if c is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c  <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
