#include <stdio.h>
int main(){
    //variable declare 
    float distance_km, distance_meter, distance_feet, distance_inches, distance_centimeter;
    //take user input
    printf("Please input distance in KM = ");
    scanf("%f", &distance_km);

    //convert distance to meter,feet,inches,centimeter
    distance_meter = 1000 * distance_km;
    distance_feet = 3280.84 * distance_km;
    distance_inches = 39370.1 * distance_km;
    distance_centimeter = 100000.05 * distance_km;

    //print all converted value
    printf(" Meter=%.2f \n Feet= %.2f \n Inches= %.2f \n Centimeter= %.2f\n",distance_meter,distance_feet,distance_inches,distance_centimeter);

    return 0;
}