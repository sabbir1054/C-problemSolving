#include<stdio.h>
#include<string.h>

int main(){
    char arrStr[] = "sabbir";
    char findChar = 'b'; /// find this character
    for (int i = 0; i < strlen(arrStr); i++)
    {
        if (arrStr[i]==findChar)
        {
            printf("%c position = %d \n",arrStr[i], i); 
        }
    
    }


    return 0;
}