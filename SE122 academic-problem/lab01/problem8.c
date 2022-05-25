#include<stdio.h>
int main(){
 //variable declare
    int num,d1,d2,d3,d4,d5;
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
    num = num / 10;
    d5 = num % 10;


//print the reverse number
    printf("The reverse number is= %d%d%d%d%d", d1,d2,d3,d4,d5);
    return 0;

    return 0;
}