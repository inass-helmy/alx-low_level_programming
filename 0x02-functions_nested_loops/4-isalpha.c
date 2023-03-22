checks for lowercase character.#include "main.h"

/**
 * function _isalpha
 *
 * Description: checks for alphabetic character
 *
 * Return:  1 if c is lowercase or uppercase and 0 otherwise
 *
*/
int _isalpha (int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
