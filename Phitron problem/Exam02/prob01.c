// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,k,a,track;
    scanf("%d %d %d",&n,&k,&a);
    
    for(int i=1;i<=k;i++){
    
     track=a;
     if(a==n){
         a=0;
     }
     a++;
    }
   printf("%d",track); 
    
    return 0;
}