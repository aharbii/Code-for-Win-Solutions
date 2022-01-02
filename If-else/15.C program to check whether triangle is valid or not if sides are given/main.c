#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;

    printf("Enter first side: ");
    scanf("%d", &a);
    
    printf("Enter second side: ");
    scanf("%d", &b);
    
    printf("Enter third side: ");
    scanf("%d", &c);


    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }
    
    return 0;
}