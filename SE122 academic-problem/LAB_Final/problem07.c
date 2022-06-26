#include<stdio.h>
int main(){
    int num_of_stu;
    printf("Please input number of student : ");
    scanf("%d", &num_of_stu);
    float marks[num_of_stu];
    for (int i = 0; i < num_of_stu; i++)
    {
        printf("Please input marks of student %d = ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    float sum = 0;
    float avg;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + marks[i];
    }

    avg = sum / num_of_stu;
    printf("Average of marks is = %.2f", avg);

    return 0;
}