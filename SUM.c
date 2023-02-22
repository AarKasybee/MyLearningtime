#include <stdio.h>
#include "Functions.h"

/**
 * main - Start of the program
 *
 * Return: Always returns a 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 2;
	b = 6;
	c = sum(a, b);

	printf("The sum is %d", c);
	printf("\n");

	Write();
	return (0);
}
/**
 * sum - Add numbers
 *
 * @n: first value
 * @m: second value
 *
 * Return: returns the sum
 */
int sum(int n, int m)
{
	return (n + m);
}
/**
 * write - writes a message
 */
void Write(void)
{
	printf("This is just a try\n");
}
