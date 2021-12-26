#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("%d is positive\n", number);
    }
    else if(number < 0)
    {
        printf("%d is negative\n", number);
    }
    else
    {
        printf("%d\n", number);
    }

    return 0;
}