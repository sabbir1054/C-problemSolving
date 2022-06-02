#include<stdio.h>

int main(){

long long num_input,all_count=0,count2=0;
scanf("%lld",&num_input);


while(num_input!=0 ){

if(num_input%10==4||num_input%10==7){
    count2++;
    all_count++;
}else{
    all_count++;
}

num_input=num_input/10;

}



if(count2==4||count2==7){
   printf("YES");
}else{
   printf("NO");
}

return 0;
}

