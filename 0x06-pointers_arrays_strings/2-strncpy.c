#include "main.h"

/**
 * _strncpy - a function that copies strings
 * @dest: an in put string
 * @src: an input string
 * @n: an integer
 * Retun: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;



	return (temp);
}
