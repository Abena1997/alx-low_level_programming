#include "main.h"
/**
 * * print_alphabet - Print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchr('\n');
}
