/* 
Problem No :06
Problem : Write a C program to calculate sum of digits of a number
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */


#include<stdio.h>
int main(){
    int num, sum=0;
    printf("Please input the number ");
    scanf("%d", &num);

    while (num!=0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("The sum of digits is = %d", sum);

    return 0;
}