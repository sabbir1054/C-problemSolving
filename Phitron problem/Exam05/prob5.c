#include<stdio.h>
#include<stdlib.h>
int main(){

    int a[] = {1, 2, 3, 4, 5, 7, 8, 9};
    
    printf("%d\n", &a[0]);
    printf("%d\n", &a[2]);
    printf("%d\n", &a[3]);
    printf("%d\n", &a[4]);
    printf("%d\n", &a[5]);
    printf("%d\n", &a[6]);
    printf("%d\n", &a[7]);
    printf("%d\n", &a[8]);
    

    return 0;
}