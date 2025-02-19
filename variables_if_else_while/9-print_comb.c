#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(44);
			putchar(32);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
