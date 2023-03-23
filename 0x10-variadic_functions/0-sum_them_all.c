#include <stdio.h>
#include <variadic_functions.h>
#include <stdarg.h>
/**
 * main - function that returns the sum of all its parameters
 * Return: 0 success
 **/
int main(void)
{
int char n;
int char sum_them_all;
}
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

