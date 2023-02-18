#include <stdio.h>
/**
 * Main - program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
char az;
for (az = 'a'; az <= 'z'; az++);
{
putchar(az);
}
putchar('\n');
return (0);
}
