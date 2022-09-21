#include <stdio.h>
/**
 * main - entry point
 * Description: main prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}