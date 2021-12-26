#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Enter day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Thursday\n");
        break
    case 3:
        printf("Wednsday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Unvalid Input\n");
        break;
    }
    return 0;
}