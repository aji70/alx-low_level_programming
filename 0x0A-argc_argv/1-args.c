#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints the number or arguements you passed it into
 * @argc: An arguement counter
 * @argv: An arguement values
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
