#include<stdio.h>
#include<string.h>
int main(){

int num_count,count=0;
scanf("%d",&num_count);

char arr[num_count];
scanf("%s",&arr);

for(int i=0;i<strlen(arr);i++){
    if(arr[i]==arr[i+1]){
       count++;
    }
}
printf("%d",count);
return 0;
}
