#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int digits = 0;
    while (number > 0)
    {
        printf("%d\n", number);
        number /= 10;
    }    

    return 0;
}