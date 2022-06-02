#include<stdio.h>

void makeDouble(int *valueNum){
    *valueNum *= 2;
}

int main(){
    int num = 10;
    /* 
    here make  change because 
    here pass address of num
     */

    makeDouble(&num);
    printf("%d", num);//output = 10

    return 0;
}