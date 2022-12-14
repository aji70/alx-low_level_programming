#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 * @dest: an inut string
 * @src: an input string
 * Return: A pointer to the reulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
