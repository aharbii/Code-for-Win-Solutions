#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Enter days: ");
    scanf("%d", &days);

    int years = days / 365;
    int reminder = days % 365;
    int weeks = reminder / 7;
    reminder %= 7;

    printf("%d days = %d year/s, %d week/s and %d day/s\n", days, years, weeks, reminder);
    return 0;
}