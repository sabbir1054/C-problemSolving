/* 
Problem No :04
Problem : Write a C program to calculate the factorial of a given number
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */


#include<stdio.h>
int main(){
    int num, fact = 1;
    printf("Please input number = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of %d = %d", num, fact);
    return 0;
}