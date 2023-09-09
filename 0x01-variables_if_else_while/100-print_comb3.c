#include <stdio.h>
/**
 * main - prints all possible different condition
 * Return: 0
 */

int main(void)
{
	int ones = '0';
	int tens = '0'0;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++);
		{
			if (!((ones == tens) || (tens > ones)))
			{
				puchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putcher(',');
					putcher(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
