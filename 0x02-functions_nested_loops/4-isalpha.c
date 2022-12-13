#include "main.h"

/**
 * _isaalpha - Check main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase
 * Return: 1 or 0 in otherwise
 */
int_isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
