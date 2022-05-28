#include<stdio.h>
int main(){
    int num;
    printf("Please input your number : ");
    scanf("%d", &num);

    if(num%2==0){
        printf("Even number");

    }else{
        printf("Odd number");
    }

    return 0;
}