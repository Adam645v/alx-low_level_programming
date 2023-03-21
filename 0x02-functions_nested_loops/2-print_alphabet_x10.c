#include "main.h"

/**
* print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
*followed by a new line.
*
*/

void print_alphabet_x10(void)
{
	char ltr;
	int N = 0;

	while (N <= 10)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);
		}
		N++;
	}
	_putchar('\n');
}