#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{

int n;

srand(time(NULL))
n = rand();
printf("Last digit of %d is ", n)
int lastDigit = n % 10;
if (lastDigit > 5)
printf("and is greater than 5\n");
else if (lastDigit == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
