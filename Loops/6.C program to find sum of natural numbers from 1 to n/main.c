#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    
}