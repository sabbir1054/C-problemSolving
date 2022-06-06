#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, insertedValue, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++){
        arr[i] = i + 1;
		}
 
    // print the original array
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);}
    printf("\n");
 
    // element to be inserted
    insertedValue = 500;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--){
        arr[i] = arr[i - 1];}
 
    // insert x at pos
    arr[pos - 1] = insertedValue;
 
    // print the updated array
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);}
    printf("\n");
 
    return 0;
}