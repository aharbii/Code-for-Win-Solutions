#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number;
    int second_number;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    if (first_number > second_number)
    {
        printf("Max = %d\n", first_number);
    }
    else
    {
        printf("Max = %d\n", second_number);
    }
    

    return 0;
}