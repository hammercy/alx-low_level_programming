#include <stdio.h>

/**
 * main - Prints lowercase and  uppercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = 97;

	while (az < 123)
	{
		putchar(az);
		az++;
	}
	az = 65;
	while (az < 91)
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
