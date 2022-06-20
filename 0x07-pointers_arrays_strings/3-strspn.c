#include "main.h"

/**
 * *_strspn - returns the length of a prefix substring
 * @s: string to evaluate
 * @accept: character to match
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int cmpt = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpt);
}
