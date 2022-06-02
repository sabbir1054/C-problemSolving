#include<stdio.h>

void makeDouble(int valueNum){
    valueNum *= 2;
}

int main(){
    int num = 10;
    /* 
    Here not make any change because 
    here pass just value of num
     */

    makeDouble(num);
    printf("%d", num);//output = 10

    return 0;
}