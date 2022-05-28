#include<stdio.h>
int main(){

    int angel1, angel2, angel3;
    printf("input angel1 angel2 angel3 : ");
    scanf("%d %d %d", &angel1, &angel2, &angel3);

    if (angel1+angel2+angel3==180)
    {
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }
    

    return 0;
}