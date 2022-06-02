#include<stdio.h>

int main(){

int input1,input2,count;

scanf("%d %d",&input1,&input2);

if(input1<input2){
    
   count=(input2-input1)+1; 
}else{
count=0;

}


printf("%d",count);

return 0;
}
