#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
