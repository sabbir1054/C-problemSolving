#include<stdio.h>
int main(){
    //variable declare
    float marks1, marks2, marks3, marks4, marks5, sum,percentage_of_marks;

    //take input from user for marks
    printf("Input marks for Subject 1= ");
    scanf("%f", &marks1);
    printf("Input marks for Subject 2= ");
    scanf("%f", &marks2);
    printf("Input marks for Subject 3= ");
    scanf("%f", &marks3);
    printf("Input marks for Subject 4= ");
    scanf("%f", &marks4);
    printf("Input marks for Subject 5=  ");
    scanf("%f", &marks5);

    //calculation of marks
    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage_of_marks = (sum * 100) / 500;

    //print the sum and percentage of marks
    printf("Aggregate marks obtained by student= %.2f \n Percentage of marks is = %.2f", sum, percentage_of_marks);

    return 0;
}