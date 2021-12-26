#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basic_salary;
    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);

    double hra = 0;
    double da = 0;
    if (basic_salary <= 10000)
    {
        hra = 0.2;
        da = 0.8;
    }
    else if(basic_salary < 20000)
    {
        hra = 0.25;
        da = 0.9;
    }
    else
    {
        hra = 0.3;
        da = 0.95;
    }

    int gross_salary = basic_salary + (basic_salary * hra) + (basic_salary * da);
    printf("Gross salary = %d\n", gross_salary);
    
    return 0;
}