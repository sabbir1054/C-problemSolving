#include<stdio.h>

int main(){

int input_count;
scanf("%d",&input_count);


for(int i=1;i<=input_count;i++){

    if(i==1){
        printf("I hate");
    }else if(i%2==0){
        printf(" that I love ");
    }else{
        printf("that I hate");
    }
}

printf(" it");

return 0;
}
