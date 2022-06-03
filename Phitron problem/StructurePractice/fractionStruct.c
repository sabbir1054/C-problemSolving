#include<stdio.h>

struct Fraction{
    int num;
    int denom;
};

void print (struct Fraction f){
    printf("%d/%d", f.num, f.denom);
}

int main(){

    struct Fraction half = {2, 4};

    print(half);

    return 0;
}