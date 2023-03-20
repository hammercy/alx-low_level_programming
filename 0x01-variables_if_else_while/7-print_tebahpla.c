#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = 122;

	while (az > 96)
	{
		putchar(az);
		az--;
	}
	putchar('\n');
	return (0);
}
