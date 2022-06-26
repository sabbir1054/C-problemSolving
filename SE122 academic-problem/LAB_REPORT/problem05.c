#include<stdio.h>
int main(){
int arr[10]={2,2,4,4,6,1,3,5,8,9};
int count =0;

for(int i =0;i<10;i++){

    for(int j=i+1;j<10;j++){
    if(arr[i]==arr[j]){
        count++;
    }
    
    }
}

printf("There are %d duplicate value",count);;


return 0;
}