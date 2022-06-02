#include<stdio.h>

int main(){
int num_count,max_value=0,sum=0;

scanf("%d",&num_count);
int arr[num_count];
for(int i =0;i<num_count;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<num_count;i++){
    if(max_value<arr[i]){
        max_value=arr[i];
    }
}


for(int i=0;i<num_count;i++){
    int rest=max_value-arr[i];
    sum=sum+rest;
}

printf("%d",sum);


return 0;
}
