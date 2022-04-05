#include "main.h"

/**
 * *_strcat - function concatenates two strings
 * @dest: string to append
 * @src: string to add
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0, n = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}

