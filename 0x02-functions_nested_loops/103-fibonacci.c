#include <stdio.h>
/**
 * main - print sum of even fib numbers
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += k;
	j + k - j;
	++i;
	}
	printf("%1d\n", sum);
	return (0);
}
