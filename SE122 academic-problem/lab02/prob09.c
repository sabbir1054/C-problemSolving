#include<stdio.h>
int main(){
    char inputChar;
    printf("Please in a Character");
    scanf("%c", &inputChar);

    if(inputChar>='A' && inputChar <='Z'){
        printf("This is capital letter: ");
    }else if(inputChar>='a' && inputChar <='z'){
        printf("This is small letter");
    }else if(inputChar>='0'&& inputChar<='9'){
printf("This is  number");
    }else {
        printf("Special Character");
    }

    return 0;
}