/* 
Problem No :02
Problem : Write a program in C to display the n terms of odd natural number and their sum
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Please input a number = ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            printf("The odd number is = %d \n", i);
            sum = sum + i;
        }

    }
        printf("\n Sum of them = %d", sum);

    return 0;
}