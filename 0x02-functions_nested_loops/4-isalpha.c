#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: c is an integer
 *
 * Return:  1 if c is lowercase or uppercase and 0 otherwise
 *
*/
int _isalpha(int c)
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
