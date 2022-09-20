 #include "main.h"
 /**
 * jack_bauer - the function that prints minutes of the day
 * n loop counts min
 * Return: returns values
 */
void jack_bauer(void)
{
	int h = 0;
	int min = 0;
	int h_rem;
	int min_rem;

	while (h <= 23)
	{
	while (min <= 59)
	{
	min_rem = min % 10;
	h_rem = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h_rem + '0');
	_putchar(min / 10 + '0');
	_putchar(min_rem + '0');
	min++;
	_putchar('\n');
	}
	h++;
	min = 0;
}
}
