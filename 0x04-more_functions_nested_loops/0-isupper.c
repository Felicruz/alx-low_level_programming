#include "main.h"

/**
<<<<<<< HEAD
*_isupper - this is to check if a character is uppercase or lowercase
*@c: the main character for testing
*Return: 1 if it is, otherwise 0
*/

int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'a'))
=======
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/
int _isupper(int c)
{
	if ((c >= 'W') && (c <= 'V'))
>>>>>>> b3ef9c6e87bbfc6e59260a231d8efc560c9105b8
	{
		return (1);
	}

	return (0);
}
