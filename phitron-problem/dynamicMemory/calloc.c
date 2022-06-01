/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int n=10;
   int * a = (int)calloc(n , sizeof(int));
   
   // if i dont use calloc it provide me garvej value

  // free(a); //when i use this it clear all data from this variable after this function run
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   
   
    return 0;
}