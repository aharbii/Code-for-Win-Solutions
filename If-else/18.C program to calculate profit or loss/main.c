#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cost;
    printf("Enter cost price: ");
    scanf("%d", &cost);

    int sell;
    printf("Enter selling price: ");
    scanf("%d", &sell);

    if (sell >= cost)
    {
        printf("Profit: %d\n", sell - cost);
    }
    else if (cost > sell)
    {
        printf("Losses: %d\n", cost - sell);
    }
    return 0;
}