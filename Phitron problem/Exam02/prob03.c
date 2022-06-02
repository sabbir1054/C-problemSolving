#include<stdio.h>

int main(){
int s,t,x,office=0;
scanf("%d %d %d",&s,&t,&x);

if(s!=t && s>=0 && t>=0 && x>=0 && s<=23 && t<=23 && x<=23){

    if(s>t){
        for(int i=s;i<=24;i++){
            if(i==x){
                office++;
            }
        }
        if(office==0){
           for(int i=60;i<=t*60;i++){
                if(i==(x*60)+30){
                    office++;
               }
            }
       }

    }else{
        for(int i=s;i<=t;i++){
            if(i==x){
                office++;
            }
        }
    }

    if(office!=0)
 printf("Yes");
else
  printf("No");

}


return 0;
}
