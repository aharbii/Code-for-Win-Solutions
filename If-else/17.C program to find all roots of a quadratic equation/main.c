#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    printf("a = ");
    scanf("%d", &a);

    int b;
    printf("b = ");
    scanf("%d", &b);

    int c;
    printf("c = ");
    scanf("%d", &c);

    int discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        double first_root = (double)((-1 * b ) + sqrt(discriminant)) / (2 * a);
        double second_root = (double)((-1 * b ) - sqrt(discriminant)) / (2 * a);
        printf("x = %+5.5lf\ny = %+5.5lf\n", first_root, second_root);
    }
    else if(discriminant == 0)
    {
        double first_root = (double) (-1 * b) / (2 * a);
        printf("x = %+5.5lf\n", first_root);
    }
    else if (discriminant < 0)
    {
        double real_root = (double) (-1 * b) / (2 * a);
        double imaginary = sqrt(-discriminant) / (2 * a);
        printf("x = %+5.5lf + i%+5.5lf\ny = %+5.5lf - i%+5.5lf\n", real_root, imaginary, real_root, imaginary);
    }
    return 0;
}