#include<stdio.h>

void bar(){
    printf("bar\n");
}
void foo(){
    printf("foo\n");
    bar();
}

int main(){
    foo();
    return 0;
}