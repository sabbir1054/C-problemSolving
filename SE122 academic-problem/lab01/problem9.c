#include<stdio.h>
int main(){
//variable declare
    int num,d1,d2,d3,d4,sum;
    // take input
    printf("Please Input the 5 digit value= ");
    scanf("%d", &num);
    //calculate
    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;

    sum = d1 + d4;

    // print the sum of number
    printf("The addition is= %d",sum);
 
    return 0;
}