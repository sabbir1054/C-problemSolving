#include<stdio.h>
#include<string.h>
int main(){
char str[100],c;
int count=0,len=0;
gets(str);
for(c='a';c<='z';c++){

    count=0;
    for(int i=0;str[i]!=NULL;i++){
        if(c==str[i]){
            count++;
        }

    }
     if(count>=1){
           len++;
        }

}



 if((len)%2==0){
  printf("CHAT WITH HER!");
}else if((len)%2!=0){
  printf("IGNORE HIM!");
}

return 0;
}
