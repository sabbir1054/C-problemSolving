#include<stdio.h>
int main(){
    int working_time;
    float salary_overtime;
    printf("please input working time of employee : ");
    scanf("%d", &working_time);

    if (working_time>40)
    {
        salary_overtime = (working_time - 40) * 12*10;
        printf("Overtime salary 10 employee = %.2f", salary_overtime);
    }else{
        printf("Employee has no overtime");
    }
    

    return 0;
}