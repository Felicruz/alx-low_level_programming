#include "main.h"

/**
*_isupper - this is to check if a character is uppercase or lowercase
*@c: the main character for testing
*Return: 1 if it is, otherwise 0
*/

int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'a'))
	{
		return (1);
	}

	return (0);
}
