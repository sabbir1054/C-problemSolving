#include<stdio.h>
int main(){

int count;

float a,b,mult,sum;

scanf("%d",&count);

for(int i=1;i<=count;i++){
        scanf("%f%f",&a,&b);
    mult=a*b;

    sum=sum+mult;
}
printf("%.3f",sum);
return 0;
}
