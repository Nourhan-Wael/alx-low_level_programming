#include<stdio.h>
/**
 * main - Entry point
 * @argc: a parameter
 * @argv: a parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum;

if (argc == 3)
{
sum = argv[1] * argv[2];
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

