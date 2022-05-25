#include<stdio.h>
int main(){

    //variable declare
    float temp_cel, temp_fer;
    
    //take input from user
    printf("Please input temperature in Fahrenheit = ");
    scanf("%f", &temp_fer);

    //convert to celsius
    temp_cel = (temp_fer - 32) * 5 / 9;

    //print result
    printf("Temperature in Celsius is= %.2f", temp_cel);

    return 0;
}