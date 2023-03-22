#include "main.h"

/**
 * function print_alphabet_x10
 *
 * Description:  prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for(counter = 0 ; counter < 10 ; counter++)
	{
		for(letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

}
