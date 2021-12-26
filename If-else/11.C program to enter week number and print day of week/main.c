#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter day number: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("MONDAY\n");
    }
    else if(number == 2)
    {
        printf("THURSDAY\n");
    }
    else if(number == 3)
    {
        printf("WEDNSDAY\n");
    }
    else if(number == 4)
    {
        printf("TUESDAY\n");
    }
    else if(number == 5)
    {
        printf("FRIDAY\n");
    }
    else if(number == 6)
    {
        printf("SATURDAY\n");
    }
    else if(number == 7)
    {
        printf("SUNDAY\n");
    }
    
    

    return 0;
}