#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number;
    printf("Enter first number: ");
    scanf("%d", &first_number);

    int second_number;
    printf("Enter second number: ");
    scanf("%d", &second_number);

    switch (first_number > second_number)
    {
        case 0:
            printf("Max = %d\n", second_number);
            break;
        case 1:
            printf("Max = %d\n", first_number);
        default:
            break;
    }
    
    return 0;
}