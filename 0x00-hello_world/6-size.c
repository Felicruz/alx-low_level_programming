#include <stdio.h>

/**
 *main - print "program that prints the size of various types on the computer"
 *
 *Return: 0 if exited properly, non-zer otherwise
 */
int main(void)

	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
        return (0);
}
