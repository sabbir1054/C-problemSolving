/* 
Problem No :03
Problem : Write a program in C to display the pattern like right angle triangle with a number.
          The pattern like :    1 
                                12 
                                123 
                                1234
Student ID : 221-35-845
Student Name: Md Sabbir Hossain
 */



#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}