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

	printf("Size of char: %zu byte(s)\n", sizeof(q)) ;
	printf("Size of an int: %zu byte(s)|n", sizeof(w));
	printf("size of a long int: %zu byte(s)\n", sizeof(e));
	printf("size of a long long int: %zu byte(s)\n",sizeof(r));
	printf("size of a float: %d byte(s)\n",sizeof(t));
	return (0);
}
	
