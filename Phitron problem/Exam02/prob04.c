#include<stdio.h>

int main(){

int count,countA=0,countD=0;
scanf("%d",&count);
char in;


for(int i=1;i<=count;i++){
    scanf(" %c",&in);
    if(in=='A'){
        countA++;
    }else if(in=='D'){
        countD++;
    }
}

if(countA>countD){
    printf("Anton");
}else if(countA==countD){
    printf("Friendship");
}else if(countA<countD){
    printf("Danik");
}

return 0;
}
