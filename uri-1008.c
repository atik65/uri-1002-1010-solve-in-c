#include <stdio.h>

int main()
{
    int employe_number, hours_of_work;
    float salary_per_hour;

    scanf("%d %d", &employe_number, &hours_of_work);
    scanf("%f", &salary_per_hour);

    printf("NUMBER = %d\n", employe_number);
    printf("SALARY = U$ %0.2f\n", (salary_per_hour * hours_of_work));

    return 0;
}