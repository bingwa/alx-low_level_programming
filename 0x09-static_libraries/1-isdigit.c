#include "main.h"

/**
 *  _isdigit - function that cheks for a digit (0 through 
 *  @c: int to be checked
 * Returns: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

