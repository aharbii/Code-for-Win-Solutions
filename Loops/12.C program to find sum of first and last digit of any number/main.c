#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    char last_digit = number % 10;
    char first_digit = 0;
    
    while (number > 0)
    {
        first_digit = number % 10;
        number /= 10;
    }

    int sum = last_digit + first_digit;
    printf("sum of last and first digits = %d\n", sum);
    
    return 0;
}