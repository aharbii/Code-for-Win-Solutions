#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number;
    printf("Enter first numebr: ");
    scanf("%d", &first_number);

    int second_number;
    printf("Enter second number: ");
    scanf("%d", &second_number);

    if (first_number > second_number)
    {
        printf("Max = %d\n", first_number);
    }
    else if(second_number > first_number)
    {
        printf("Max = %d\n", second_number);
    }
    else
    {
        printf("They are equal\n");
    }
    


    return 0;
}