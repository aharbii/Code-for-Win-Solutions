#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number;
    int second_number;

    printf("Input first number: ");
    scanf("%d", &first_number);

    printf("Input second number: ");
    scanf("%d", &second_number);

    int sum = first_number + second_number;
    printf("%d + %d = %d\n",first_number, second_number, sum);

    int sub = first_number - second_number;
    printf("%d - %d = %d\n",first_number, second_number, sub);

    int multiply = first_number * second_number;
    printf("%d * %d = %d\n",first_number, second_number, multiply);

    int division = first_number / second_number;
    printf("%d / %d = %d\n",first_number, second_number, division);

    int reminder = first_number % second_number;
    printf("%d + %d = %d\n",first_number, second_number, reminder);

    
    
    return 0;
}