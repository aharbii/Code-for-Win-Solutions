#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int number_copy = number;
    char last_digit = number_copy % 10;
    char first_digit = 0;
    
    int digits = 0;
    while (number_copy > 0)
    {
        digits++;
        first_digit = number_copy % 10;
        number_copy /= 10;
    }

    digits--;

    if (first_digit > last_digit)
    {
        number -= (first_digit - last_digit) * (int) pow(10, digits);
        number += (first_digit - last_digit);
    }
    else if(last_digit > first_digit)
    {
        number += (last_digit - first_digit) * (int) pow(10, digits);
        number -= (last_digit - first_digit);
    }
    else
    {
        number = number;
    }

    printf("Number after swap: %d\n", number);
    

    return 0;
}