#include "main.h"

/**
 * main - print the alphabet in lowercase followed by new line.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
