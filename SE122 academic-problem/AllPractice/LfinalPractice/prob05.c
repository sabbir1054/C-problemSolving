#include<stdio.h>
int main(){
    float marks;
    printf("Please Input your marks : ");
    scanf("%f", &marks);
    if (marks>=80 && marks<=100)
    {
        printf("Grade is : A+");
    }else  if (marks>=75 && marks<=79)
    {
        printf("Grade is : A");
    }else  if (marks>=70 && marks<=74)
    {
        printf("Grade is : A-");
    }else  if (marks>=65 && marks<=69)
    {
        printf("Grade is : B+");
    }else  if (marks>=60 && marks<=64)
    {
        printf("Grade is : B");
    }else  if (marks>=55 && marks<=59)
    {
        printf("Grade is : B-");
    }else  if (marks>=50 && marks<=54)
    {
        printf("Grade is : C+");
    }else  if (marks>=45 && marks<=49)
    {
        printf("Grade is : C");
    }else  if (marks>=40 && marks<=44)
    {
        printf("Grade is : D");
    }else  if (marks>=0 && marks<=39)
    {
        printf("Grade is : F");
    }
    
    return 0;
}