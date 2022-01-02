#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    (((year % 4) == 0) && ((year % 100) != 0)) ? printf("Leap Year!\n") : 
    ((year % 400) == 0) ? printf("Leap Year\n") : printf("Common Year\n");

    return 0;
}