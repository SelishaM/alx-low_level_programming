#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or NULL if no bytes are found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

