#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Program will assign a random number
*Return: Always 0
*/
int main(void)
{
int n, last_digit;
srand(time(NULL));
n = rand() % 1000 + 1;
last_digit = n % 10;
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("0 and is 0\n");
}
whilei
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}
