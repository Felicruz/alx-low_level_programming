#include "main.h"

/**
*_isupper - this verifies if a character is uppercase or lowercase
*@c: character to be tested
*Return: 1 if it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
