#include<stdio.h>
#include<string.h>

int check_palindrome(char *a){
    int count = 0;
    int i = 0, j = strlen(a) - 1;
    while (j>i)
    {
        if (a[i] != a[j])
        {
            count++;
        }
        i++;
        j--;
    }
    return count;
}

int main (){
    char a[] = "abcdba";
    printf("%d ", check_palindrome(a));
    return 0;
}