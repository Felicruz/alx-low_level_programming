#include <stdio.h>

/**
 *main - print the string in the put function
 *
 *Description: using the main function
 *this program prints "Programming is like building a multilingual puzzle
 *Return: 0
 */
int main(void)
	
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char:%1d byte(s)\n", sizeof(c));
	print("Size of an int: %1d byte(s)\n", sizeof(i));
	print("Size of long int: %1d byte(s)\n", sizeof(li));
	print("Size of a long long int: %1d byte(s)\n", sizeof(lli));
	print("Size of a float: %1d byte(s)\n", sizeof(f));
        return (0);
}
