#include "main.h"
#include <stdio.h>

/**
 * main - check the code for main
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "main!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
