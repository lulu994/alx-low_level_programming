#include <stdlib.h>
#include "main.h"

/**
  * *_realloc - function that dynamically reallocates a memory block
  *@ptr: pointer to the memory previsouly allocated by malloc
  *@old_size: size of the memory block pointed to by ptr in bytes
  *@new_size: the new size of the memory block in bytes
  *Return: a void pointer to the reallocated memory block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
