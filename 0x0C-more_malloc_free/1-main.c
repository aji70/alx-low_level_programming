#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for main
 *
 * Return: Always o
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%\n", concat);
	free(concat);
	return (0);
}
