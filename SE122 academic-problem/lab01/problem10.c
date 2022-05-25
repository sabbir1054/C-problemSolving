#include<stdio.h>
int main(){
    //variable declare
    double percentage_men = 52,percentage_women, total_literacy = 48, literate_men_percentage = 35 ,population=80000,literate_women_percentage;
    double number_of_men,number_of_women,number_of_literate_men, number_of_literate_women;
    //calculation
    percentage_women = 100 - percentage_men;

    number_of_men = percentage_men * population / 100;
    number_of_women = percentage_women * population / 100;

    literate_women_percentage = 100 - literate_men_percentage;
    number_of_literate_men = literate_men_percentage * number_of_men / 100;
    number_of_literate_women = literate_women_percentage * number_of_women / 100;

    //print the result
    printf("The number of men=%.2lf\nThe number of literate men= %.2lf\nThe number of women=%.2lf\n The number of literate women= %.2lf",number_of_men, number_of_literate_men,number_of_women, number_of_literate_women);

    return 0;
}