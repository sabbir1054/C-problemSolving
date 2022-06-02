#include<stdio.h>
#include<string.h>
int main(){
int size,count=0,count2=0;
scanf("%d",&size);

char arr[size];
scanf("%s",&arr);


for(char c='a';c<='z';c++){

      count=0;
      for(int i=0;i<size;i++){
        if(c==tolower(arr[i])){
            count++;
        }
      }
      if(count>0){
        count2++;
      }


}

if(count2>=26){
    printf("YES");
}else{
    printf("NO");
}


return 0;
}

