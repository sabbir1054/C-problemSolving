/* 
Problem No :05
Problem : Write a C program to check whether a given number is an armstrong number or not
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */

#include<stdio.h>
#include<math.h>
int main(){
    int num, sum = 0, temp;
    printf("Please input your number : ");
    scanf("%d", &num);

    int countDigit = 0,newNum=num;
    while (newNum!=0)
    {
        newNum = newNum / 10;
        countDigit++;
    }

  
    temp = num;
    while (num!=0)
    {
        int rem = num % 10;
        sum = sum + pow(rem,countDigit);
        num = num / 10;
     
    }

    if (temp==sum)
    {
        printf("Yes this is armstrong number");
        
    }else
    {
        printf("No this is not armstrong number");
    }
    
    
    

    return 0;
}