#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints it's name, followed by a new line
 * @argc: arguement count
 * @argv: arguement value, a string that come after caling function
 * Return: Always 0 (Successs)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
