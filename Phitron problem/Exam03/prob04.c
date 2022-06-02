#include<stdio.h>
#include<string.h>
int main(){
char arr[1000];
scanf("%s",&arr);
int len=strlen(arr);


char *result=arr+1;
char c;
if(arr[0]>=65&&arr[0]<97){
  c=arr[0];
}else{

    c =arr[0]-32;
}


printf("%c%s",c,result);

return 0;
}
