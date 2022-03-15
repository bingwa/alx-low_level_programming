#include "main.h"

/**
 * print_alphabet- prints alphabet in lowercase
 *
 * Rrturn: Always 0
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	}
	_putchar ('\n');

}
