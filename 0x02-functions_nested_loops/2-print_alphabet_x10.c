#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase.
 */
void print_alphabet(void)

{
        int i;
        int y;

        for (y = 0; y < 10; y++)
        {
            for (i = 'a'; i <= 'z'; i++)
            {
                _putchar(i);
            }
         _putchar('\n');      
        }
        
        
}
