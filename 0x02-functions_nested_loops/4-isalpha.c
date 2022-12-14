#include "main.h"

/**
 * _isalpha - check main
 * @c: An input character
 * Description: _isalpha returns 1 if thr character letter,
 * lowercase or uppercase.
 * Return: 1 or 0 in otherwise
 */

int _isalpha(int c)
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
