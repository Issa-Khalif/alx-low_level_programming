#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
