#include <stdio.h>

/**
 *main - print "program that prints the size of various types on the computer"
 *
 *Return: 0 if exited properly, non-zer otherwise
 */
int main(void)

	printf("Size of a char:%lu byte(s)\n", sizeof(char));
	print("Size of an int: %lu byte(s)\n", sizeof(int));
	print("Size of long int: %lu byte(s)\n", sizeof(long int));
	print("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	print("Size of a float: %lu byte(s)\n", sizeof(float));
        return (0);
}
