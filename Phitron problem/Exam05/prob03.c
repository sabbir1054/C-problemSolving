#include<stdio.h>
#include<string.h>

void makeStrCopy(char in[], char out[]){
    int i;
    for (  i = 0; in[i] != '\0'; ++i)
    {
        out[i] = in[i];
    }

    out[i] = '\0';
}

int main(){
    char in[] = "Hello";
    char out[strlen(in)];
    makeStrCopy(in, out);

    printf("%s", out);

    return 0;
}