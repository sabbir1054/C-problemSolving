#include<stdio.h>
#include<string.h>

int main(){

    char text[] = "appleChina";

    printf("%s\n", strstr(text, "e"));
    printf("%c\n", strchr(text,  'e'));

    return 0;
}