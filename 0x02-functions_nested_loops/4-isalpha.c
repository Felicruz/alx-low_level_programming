#include "main.h"

/**
 *_isalpha - compares the two letters
 *@c: the main character of the function
 *Return:  returns a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
