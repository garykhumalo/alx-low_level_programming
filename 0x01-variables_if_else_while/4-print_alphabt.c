#include <stdio.h>
/*
 * main - function 
 *
 * return: 0 (success)
 */
int main(void)
{
	int s = 97, e = 122;

	while (s <= e)
	{
		if (s != 'q' && s!= 'e')
			putchar(s);
	}
	
	putchar('\n);

	return (0);
}
