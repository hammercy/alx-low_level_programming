#include <stdio.h>

/**
 * main - Prints single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = 48;

	while (az < 58)
	{
		putchar(az);
		az++;
	}
	az = 97;
	while (az < 103)
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
