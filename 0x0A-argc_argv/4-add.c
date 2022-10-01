#include <stdio.h>
#include <stdlib.h>
#include <stype.h>
#include <string.h>
#include "main.h"

/**
 * main - Print the adddition of positiv numbers
 * @argc: The number of argument passed to the programe
 * @argv: An array of poinetrs to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}

