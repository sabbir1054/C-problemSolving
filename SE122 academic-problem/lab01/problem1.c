#include <stdio.h>
int main(){
     //variable declare 
    double salary, dearness_allowance, house_rent,gross_salary;
    //take salary input
    printf("Please input salary: ");
    scanf("%lf", &salary);
    //calculate the gross salary
    dearness_allowance = 0.4 * salary;
    house_rent = 0.2 * salary;
    gross_salary = salary - (dearness_allowance + house_rent);
    //print the gross salary
    printf("Niloys gross salary = %.2lf", gross_salary);
    return 0;
}