#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - function that returns the sum of
  *all its parameters
  *@n: the number of paramters
  * @...: variable number of paramters
  *Return: If n == 0, return 0,Otherwise the sum of all parameter
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
