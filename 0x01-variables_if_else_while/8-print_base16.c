#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char ch[16] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
