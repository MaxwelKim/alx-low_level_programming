#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
int main(void)
{
int result = sum_them_all(4, 1, 2, 3, 4);
printf("Result: %d\n", result);
return (0);
}

