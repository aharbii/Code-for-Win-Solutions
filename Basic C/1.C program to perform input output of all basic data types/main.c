#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char_value;
    unsigned char uchar_value;

    short short_value;
    unsigned short ushort_value;

    int int_value;
    unsigned int uint_value;

    long long_value;
    unsigned long ulong_value;

    long long  long_long_value;
    unsigned long long ulong_long_value;

    float float_value;
    double double_value;
    long double long_double_value;

    printf("Enter character: ");
    char_value = getchar();
    getchar();

    printf("Enter unsigned character: ");
    uchar_value = getchar();
    getchar();

    printf("Enter short: ");
    scanf("%hd", &short_value);
    
    printf("Enter unsigned short: ");
    scanf("%hu", &ushort_value);
    
    printf("Enter integer: ");
    scanf("%d", &int_value);
    
    printf("Enter unsigned integer: ");
    scanf("%u", &uint_value);
    
    printf("Enter long: ");
    scanf("%ld", &long_value);
    
    printf("Enter unsigned long: ");
    scanf("%lu", &ulong_value);
    
    printf("Enter long long: ");
    scanf("%lld", &ulong_long_value);
    
    printf("Enter unsigned long long: ");
    scanf("%llu", &ulong_long_value);
    
    printf("Enter floating point: ");
    scanf("%f", &float_value);
    
    printf("Enter double: ");
    scanf("%lf", &double_value);
    
    printf("Enter long double: ");
    scanf("%Lf", &long_double_value);

    printf("\nYou entered character: %c\n", char_value);
    printf("You entered unsigned character: %c\n", uchar_value);

    printf("\nYou entered shor: %hd\n", short_value);
    printf("You entered unsigned short: %hu\n", ushort_value);

    printf("\nYou entered int: %d\n", int_value);
    printf("You entered unsigned int: %u\n", uint_value);

    printf("\nYou entered long: %ld\n", long_value);
    printf("You entered unsigned long: %lu\n", ulong_value);

    printf("\nYou entered long long: %lld\n", long_long_value);
    printf("You entered unsigned long long: %llu\n", ulong_long_value);

    printf("\nYou entered float: %f\n", float_value);

    printf("\nYou entered double: %lf\n", double_value);

    printf("\nYou entered long double: %Lf\n", long_double_value);


    
    return 0;
}