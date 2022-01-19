#include <stdio.h>

int main()
{

    char seller_name[10];
    float fixed_slary, all_sales, profit;

    scanf("%s", &seller_name);
    scanf("%f %f", &fixed_slary, &all_sales);

    profit = (all_sales * 15) / 100;

    printf("TOTAL = R$ %0.2f\n", fixed_slary + profit);

    return 0;
}