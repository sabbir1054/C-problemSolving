#include<stdio.h>
int main(){
    int amount, ten, fifty, hundred;
    printf("Input your amount: ");
    scanf("%d", &amount);

    ten = amount / 10;
    fifty = amount / 50;
    hundred = amount / 100;

    printf("Cashier give ten tk notes=%d , fifty tk notes= %d, hundred tk notes=%d", ten, fifty, hundred);
    return 0;
}