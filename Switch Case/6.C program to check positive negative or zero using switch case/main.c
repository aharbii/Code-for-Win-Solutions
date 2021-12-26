#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    switch (number == 0)
    {
        case 1:
            printf("0\n");
            break;
        case 0:
            switch (number > 0)
            {
                case 1:
                    printf("Positive.\n");
                    break;
                case 0:
                    printf("Negative.\n");
                    break;
            }
    }
    return 0;
}