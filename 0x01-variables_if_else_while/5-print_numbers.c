#include <stdio.h>
/**
*main - program that prints all single digit numbers of base 10 starting from 0
*Return: Always 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0'); // print the character corresponding to the digit
}
putchar('\n');
return (0);
}
