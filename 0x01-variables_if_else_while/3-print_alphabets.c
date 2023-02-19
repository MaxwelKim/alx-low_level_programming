#include <stdio.h>
/**
*main -  program that prints the alphabet
*Return: Always 0
*/
int main(void)
{
char letter;
Print lowercase alphabet
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
Print uppercase alphabet
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
