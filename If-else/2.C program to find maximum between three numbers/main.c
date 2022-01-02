#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number, second_number, third_number;
    printf("Enter first number: ");
    scanf("%d", &first_number);
    int max = first_number;
    printf("Enter second number: ");
    scanf("%d", &second_number);
    if (max < second_number)
    {
        max = second_number;
    }
    
    printf("Enter third number: ");
    scanf("%d", &third_number);
    if (max < third_number)
    {
        max = third_number;
    }
    
    printf("max = %d\n", max);


    return 0;
}