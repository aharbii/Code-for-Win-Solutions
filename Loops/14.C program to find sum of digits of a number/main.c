#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("sum = %d\n", sum);
    

    return 0;
}