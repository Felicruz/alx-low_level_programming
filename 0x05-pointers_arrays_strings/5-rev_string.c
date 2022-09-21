#include "main.h"

/**
*reset_to_98 - resets the value of given integer to 98
*@n: parameter
*Return : nothing
*/
void rev_string(char *s)
{
<<<<<<< HEAD
	int l, i;
	char ch;
	
	for(l = 0; s[l] != '\0'; l++)
	for (i = 0; i < l /2; i++)
	{
		ch = s [l];
		s[l] = s[l -1 - i];
		s[l - 1 - i] = ch;
=======
	char tmp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (i = 0; i < length1; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;

>>>>>>> 5ea0d4e08df9a3f544aa34575d644a7f9533cf7c
	}
}
