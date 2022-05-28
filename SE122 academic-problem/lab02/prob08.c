#include<stdio.h>
int main(){
    int length, width, area, perimeter;
    printf("Enter the length and width :");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);

    if(area>perimeter){
        printf("Area is big");
    }else{
        printf("Perimeter is big");
    }

    return 0;
}