#include<stdio.h>
int main(){
    float subject1_marks, subject_grade1, total_grade;
    printf("Enter subject1 marks : ");
    scanf("%f", &subject1_marks);

    if(subject1_marks>=80&&subject1_marks<=100){
        printf("A+");
    }
    else if(subject1_marks>=75&&subject1_marks<=79){
        printf("A");
    }
    else if(subject1_marks>=70&&subject1_marks<=74){
        printf("A-");
    }
    else if(subject1_marks>=65&&subject1_marks<=69){
        printf("B+");
    }
    else if(subject1_marks>=60&&subject1_marks<=64){
        printf("B");
    }
    else if(subject1_marks>=55&&subject1_marks<=59){
        printf("B-");
    }
    else if(subject1_marks>=50&&subject1_marks<=54){
        printf("C+");
    }
    else if(subject1_marks>=45&&subject1_marks<=49){
        printf("C");
    }
    else if(subject1_marks>=40&&subject1_marks<=44){
        printf("D");
    }
    else if(subject1_marks>=0&&subject1_marks<=39){
        printf("F");
    }
  

    return 0;
}
