#include "main.h"

/**
 * print_alphabet: print the letters of the alphabet
 * Description: print the letters of the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	int i = 0;
	
	for (i = 97; i <= 122; ++i)
	{
		_putchar(i);
	}
	_putchar('\n')
}
