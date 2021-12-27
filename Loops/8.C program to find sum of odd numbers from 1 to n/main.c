#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input uppel limit: ");
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i +=2;
    }
    printf("Sum = %d\n", sum);
    return 0;
}