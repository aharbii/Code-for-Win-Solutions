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

    printf("first digit: %d\n", first_digit);
    printf("last digit: %d\n", last_digit);
    
    return 0;
}