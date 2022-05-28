#include<stdio.h>
int main(){
    double cost_price, selling_price;
    printf("Enter cost and selling price : ");
    scanf("%lf %lf", &cost_price, &selling_price);
    
    if (cost_price<selling_price){
        printf("Get Profit");
    }else if (cost_price==selling_price){
        printf("Price are equal");
    }else{
        printf("Get Loss");
    }
    

    return 0;
}