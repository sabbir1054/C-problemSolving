
#include<stdio.h>

int main(){

int getNum,a,b,c,comb1,comb2,comb3;
scanf("%d",&getNum);



for(int i=1;i<=3;i++){
    if(i==1){
        c=getNum%10;
        getNum=getNum/10;
    }else if(i==2){
        b=getNum%10;
        getNum=getNum/10;
    }else if(i==3){
       a=getNum;
    }
}

comb1=(a*100)+(b*10)+c;
comb2=(b*100)+(c*10)+a;
comb3=(c*100)+(a*10)+b;

printf("%d", comb1+comb2+comb3);

return 0;
}
