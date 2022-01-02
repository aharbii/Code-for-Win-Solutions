#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (!(i % 2))
        {
            sum += i; 
        }
    }

    printf("sum = %d\n", sum);
    

    return 0;
}