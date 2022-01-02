#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eng, phy, chem, math, comp;
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &eng, &phy, &chem, &math, &comp);

    int total = eng + phy + chem + math + comp;
    double avg = total / 5;

    printf("Total = %d\n", total);
    printf("Average = %.2lf\n", avg);

    return 0;
}