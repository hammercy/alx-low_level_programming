#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = 97;

	while (az < 123)
	{
		if (az != 101 && az != 113)
			putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
