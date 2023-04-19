#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index - function that searches for an integer
  *@array: array
  *@size: the number of elements in the array array
  *@cmp: pointer to the function to be used to compare values
  *
  * Return: If no element matches, return -1, If size <= 0, return -1
  *the cmp function does not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return(i);
	}
	return (-1);
}	
