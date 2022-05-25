#include<stdio.h>
int main(){
    //variable declare
    int temp, num1, num2;
    //take input from user
    printf("Input number 1 = ");
    scanf("%d", &num1);
    printf("Input number 2 = ");
    scanf("%d", &num2);

    //swap numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    //print numbers

    printf("Number 1 =%d \nNumber 2= %d ", num1, num2);
    return 0;
}