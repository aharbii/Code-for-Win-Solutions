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
    printf("Sum = %d\n", sum);
    
    return 0;
}