#include <stdio.h>

int main()
{

    float product1_id, product1_units, product1_price, product2_id, product2_units, product2_price;

    scanf("%f %f %f %f %f %f", &product1_id, &product1_units, &product1_price, &product2_id, &product2_units, &product2_price);

    printf("VALOR A PAGAR: R$ %0.2f\n", (product1_units * product1_price) + (product2_price * product2_units));

    return 0;
}