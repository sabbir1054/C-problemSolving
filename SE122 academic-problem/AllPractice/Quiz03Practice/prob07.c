/* 
Problem No :07
Problem : Write a C program to enter a number and print its reverse.
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */

#include<stdio.h>
int main (){
    int num, rev=0;
    printf("Please input your number : ");
    scanf("%d", &num);
    while (num !=0)
    {
        int rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
    }
    printf("Reverse number is = %d", rev);
}