#include "main.h"

/**
*reset_to_98 - resets the value of given integer to 98
*@n: parameter
*Return : nothing
*/
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
		
	while (s[i] != '\0')
		{
			i++;
		}
	k = 0;
	j = i - 1;

	while (k < j)
		{
			temp = s[k];
			s[k] = s[j];
			s[j]  =  temp;
			k++;
			j--;
		}
}
