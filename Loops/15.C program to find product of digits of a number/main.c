#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int product = 1;
    while (number > 0)
    {
        product *= number % 10;
        number /= 10;
    }

    printf("product = %d\n", product);
    

    return 0;
}