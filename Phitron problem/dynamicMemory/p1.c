/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int n=10;
   int * a = (int)malloc(n * sizeof(int));
   a=realloc(a, n * 2*sizeof(int));
   for(int i=0;i<n*2;i++){
       a[i]=10;
       
   }
   
   for(int i=0;i<n*2;i++){
       printf("%d ",a[i]);
   }
   
   
    return 0;
}