#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: using the main function
 * this program prints lowercase alphabet in reverse using putchar
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
