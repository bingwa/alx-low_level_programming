#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)

{
		return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

