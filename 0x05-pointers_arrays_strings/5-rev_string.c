#include "main.h"

/**
*reset_to_98 - resets the value of given integer to 98
*@n: parameter
*Return : nothing
*/
void rev_string(char *s)
{
	int l, i;
	char ch;

	for(l = 0; s[l]!= '\0'; l++)

	for(i = 0; i < l / 2; i++)
	{
		ch = s[l];
		s[l] = s[l -1 - i];
		s[l - 1 - i] = ch;
	}
}
