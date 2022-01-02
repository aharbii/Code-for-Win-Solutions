#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int to_print = 0;
    for (int i = 1; i <= number; i++)
    {
        to_print = (to_print * 10) + i;
        printf("%d  %8d\n", to_print, to_print);
    }

    for (int i = 1; i < number; i++)
    {
        to_print = to_print / 10;
        printf("%d  %8d\n", to_print, to_print);
    }
    

    return 0;
}