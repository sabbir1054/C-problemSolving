/* 
Problem No :01
Problem : Write a program in C to read 10 numbers from keyboard and find their sum and average.
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */

#include<stdio.h>
int main(){
    int num, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Please Input number %d :", i+1);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum is = %d", sum);
    return 0;
}