#include "main.h"
/**
 *_abs - returns absolute values of a given number
 *@n: parameter
 *Return: absolute value
 */
int _abs(int n)
{
	if (n < 1)
	n = -n;
	return (n);
}
