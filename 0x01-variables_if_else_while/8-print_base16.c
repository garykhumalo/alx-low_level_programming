#include <stdio.h>

/**
 * main - function
 *
 * return: 0 (success)
 */
int main(void)
{
	int s =0, e = 9;

	while (s <= e)
	{
		putchar(s + '0');
		s++;
	}

	s = 97;
	e = 102;
	
	while (s <= e)
	{
		putchar(s);
		s++
	}

	putchar('\n');
	s++

	return (0);
}
