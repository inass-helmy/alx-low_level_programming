checks for lowercase character.#include "main.h"

/**
 * function print_alphabet_x10
 *
 * Description:  checks for lowercase character
 *
 * Return:  1 if c is lowercase and 0 otherwise
 *
*/
int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
