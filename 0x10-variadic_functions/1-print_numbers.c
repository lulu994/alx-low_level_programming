#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function that prints numbers,
  *followed by a new line
  *@separator: string that will be used
  *to separate the numbers being printed
  *@n: an unsigned integer indicating how many numbers
  *are being printed
  *@...: an ellipsis indicating any number
  *which are the actual numbers being printed
  *The function does not return any value
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
