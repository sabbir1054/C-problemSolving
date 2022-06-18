#include<stdio.h>
int main(){

    int a = 200;
    int *P = &a;
    int **Q = &P;
    int ***R = &Q;

    ***R = 100;

    printf("%d", a);

    return 0;
}