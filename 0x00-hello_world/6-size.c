#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float t;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(q)) ;
	printf("Size of an int: %zu byte(s)|n", (unsigned long)sizeof(w));
	printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(e));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
	return (0);
}
	
