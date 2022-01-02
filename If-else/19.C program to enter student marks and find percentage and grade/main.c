#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter marks of five subjects: ");
    int math;
    scanf("%d", &math);
    int chem;
    scanf("%d", &chem);
    int phy;
    scanf("%d", &phy);
    int comp;
    scanf("%d", &comp);
    int eng;
    scanf("%d", &eng);

    int avg = (math + chem + phy + comp + eng) / 5;
    if (avg >= 90)
    {
        printf("Grade: A\n");
    }
    else if(avg >= 80)
    {
        printf("Grade: B\n");
    }
    else if(avg >= 70)
    {
        printf("Grade: C\n");
    }
    else if(avg >= 60)
    {
        printf("Grade: D\n");
    }
    else if(avg >= 40)
    {
        printf("Grade: E\n");
    }
    else
    {
        printf("Grade: F\n");
    }
    
    return 0;
}