#include<stdio.h>
int main(){
    int year;
    printf("please enter your year ");
    scanf("%d", &year);
    

    if((year%4==0)&&(year%400==0)||(year%100!=0)){
        printf("Year is Leap year");
    }else{
        printf("Not leap year");
    }

    return 0;
}