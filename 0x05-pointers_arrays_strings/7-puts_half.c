#include "main.h"

/**
*reset_to_98 - resets the value of given integer to 98
*@n: parameter
*Return : nothing
*/
void puts_half(char *str)
{
	int l, i, n;
	
	for (l =  0; str[l]; l= '\0'; i++);
	
	if(l % 2 == 0) {
		for (n= 1 / 2; str[n] != '\0'; n++);
			_putchar(str[n]);
		}else{
			for(n = ((l - 1) / 2) + 1; str[n] != '\0'; n++);
				_putchar(str[n]);
			}
			_putchar('\n');
}
