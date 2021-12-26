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


    if ((a == b) && (a == c))
    {
        printf("The triangle is equilateral.\n");
    }
    else if ((a == b) || (a == c) || (b == c))
    {
        printf("The triangle is isosceles.\n");
    }
    else
    {
        printf("The triangle is scalene.\n");
    }
    
    return 0;
}