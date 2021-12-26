#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);

    int days = 0;
    switch (month)
    {
        case 1:
            days = 31;
            break;
        case 2:
            days = 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            printf("Unvalid Input\n");
            days = 0;
            break;
    }

    printf("Days = %d\n", days);
    return 0;
}