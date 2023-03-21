#include <stdio.h>

/**
 * main - Print combination single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = 48;

	while (az < 58)
	{
		putchar(az);
		if (az != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		az++;
	}
	putchar('\n');
	return (0);
}
