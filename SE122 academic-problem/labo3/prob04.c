#include<stdio.h>
int main(){
    int num = 7;
    float fact, sum=0;

    for (int i = 1; i <= 7;i++){
        fact = 1;
        for (int j = 1; j <= i;j++){
            fact = fact * j;
        }

        sum = sum + (i / fact);
    }

        printf("%.2f", sum);

    return 0;
}