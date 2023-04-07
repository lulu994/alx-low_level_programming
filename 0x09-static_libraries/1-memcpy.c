#include "main.h"

/**
  *_memcpy - function that copies memory from a location to another
  *@dest: memory where is stored
  *@src: memory where is copied
  *@n: number of bytes
  *Return: copied memory with n byted changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int i = n;

	for (; l < i; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
