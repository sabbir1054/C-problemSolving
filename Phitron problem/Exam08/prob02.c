#include<stdio.h>
float make_average(int *arr,int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum / size;
}
int main (){
    int arr[5] = {10, 20, 30, 40, 50};
    float avg = make_average(arr, 5);
    printf("%f ", avg);
    return 0;
}
