#include<stdio.h>

int main(){

int marks;
scanf("%d",&marks);

if(0<=marks&&marks<40){
    printf("%d",(40-marks));
}else if(40<=marks&&marks<70){
    printf("%d",(70-marks));
}else if(70<=marks&&marks<90){
    printf("%d",(90-marks));
}else{
    printf("expert");
}



return 0;
}
