#include "main.h"

/**
 * *_memcpy - copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */

void *_memcpy(void *dest, cont void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n ; index++)
	{
		 destination[index] = source[index];
	}

	return (dest);
}
