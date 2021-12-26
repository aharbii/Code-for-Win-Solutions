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
    double first_root, second_root, real_root, imaginary;
    switch (discriminant == 0)
    {
        case 1:
            first_root = (double) (-1 * b) / (2 * a);
            printf("x = %+5.5lf\n", first_root);
            break;
        case 0:
            switch (discriminant > 0)
            {
                case 1:
                    first_root = (double)((-1 * b ) + sqrt(discriminant)) / (2 * a);
                    second_root = (double)((-1 * b ) - sqrt(discriminant)) / (2 * a);
                    printf("x = %+5.5lf\ny = %+5.5lf\n", first_root, second_root);
                    break;
                case 0:
                    real_root = (double) (-1 * b) / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("x = %+5.5lf + i%+5.5lf\ny = %+5.5lf - i%+5.5lf\n", real_root, imaginary, real_root, imaginary);
                    break;
            }
    }
    return 0;
}