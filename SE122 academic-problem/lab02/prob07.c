#include<stdio.h>
int main(){
    int x1, y1, x2, y2, x3, y3,slop1,slop2;

printf("Please enter the values of Three points:  \n(x1,y1): ");

scanf("%d %d",&x1,&y1);
printf("\n(x2,y2): ");
scanf("%d %d",&x2,&y2);
printf("\n(x3,y3): ");
scanf("%d%d",&x3,&y3);


    slop1 = (x2 - x1) / (y2 - y1);
    slop2 = (x3 - x2) / (y3 - y2);

    if(slop1==slop2){
        printf("They fall in a straight line");
    }else{
        printf("They are not fall in a straight line");
    }

    return 0;
}