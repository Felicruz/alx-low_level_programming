#include "main.h"

/**
 *print_sign - prints sign according to the defined condition
 *@n: this is an  argument
 *Return: returns one or zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1)
	}
{
