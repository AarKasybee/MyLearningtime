#include <stdio.h>
/**
 * main - start of the program
 */
int main (void)
{
	int i; /*declare i*/
	int n;	/*declare n*/

	i = 0; /*initialize i*/
	n = 0; /*initialize n*/

	while (i < 10) /* check if i is less than 10*/
			/* if i is less than 10, the condition is true, execute code*/
			/* if i is not less than 10, FALSE, skip code*/
	{
		printf("outer loop\n"); /*print*/

		while (n < 3) /*same as the first one*/
		{
			printf("inner loop\n");
			n++; /* n = n + 1;*/
		}
		n = 0; /* this line reset the value of n*/
		i++; /*i = i + 1;*/
	}
	return (0);
}

