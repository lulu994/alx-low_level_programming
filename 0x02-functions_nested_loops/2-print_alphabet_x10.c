#include "main.h"
/**
  *print_alphabet_x10 - print 10 time the alphabet in lowercase.
  *
  *return : always 0
  */
void print_alphabet_x10(void)
{
	int i;
	int l;

	for (l = 1; i <= 10; i++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
	}
	_putchar('\n');
	}
}
