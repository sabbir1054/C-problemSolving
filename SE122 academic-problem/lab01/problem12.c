#include<stdio.h>
int main(){
    double total_amount, profit_amount, price;
    printf("Please input total amount of 15 items= ");
    scanf("%lf", &total_amount);
    printf("Please input profit 15 items= ");
    scanf("%lf", &profit_amount);

    price = (total_amount - profit_amount) / 15;

    printf("Price per item = %.2lf", price);
    return 0;
}