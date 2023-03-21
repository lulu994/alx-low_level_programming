#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the num to be checked for
 * Return: 1 prints + if is > 0, 0 if is zero, -1 if is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
