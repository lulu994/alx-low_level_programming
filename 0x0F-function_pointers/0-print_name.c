#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints a name using a pointer
  *@name: string to be added
  *@f: pointer to function
  *
  *Return: nothing (void)
  */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);
}
