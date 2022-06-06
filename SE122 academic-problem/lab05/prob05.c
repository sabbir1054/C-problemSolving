#include<stdio.h>
int main()
{
 	int size1=5, size2=5, i, j;

    int arr1[5] = {87, 98, 5, 6, 7};
    int arr2[5] = {78,69,87,2,6};

    int size3 = size1+size2;
    int margeArr[size3];    

    // marge array   
  	for(i = 0; i < size2; i++)
  	{
      	margeArr[i] = arr1[i];
  	}
 	for(i = 0, j = size1; j < size3 && i < size2; i++, j++)
  	{
  		margeArr[j] = arr2[i];
  	}
 	

     // print new array
 	for(i = 0; i < size3; i++)
  	{
    	printf(" %d ",margeArr[i]);
  	}
  	return 0;
}


