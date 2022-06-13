#include "main.h"

/**
<<<<<<< HEAD
 * print_rev = prints a string, in reverse folowed by a new line
 * @s: input pointer to the sting to print
 * Return: void
=======
 * print_rev - prints a string, in reverse
 * @s: input
 * Return: the result
>>>>>>> a192664d6a4dbaa10f5437cadae09d60f57b2e24
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
