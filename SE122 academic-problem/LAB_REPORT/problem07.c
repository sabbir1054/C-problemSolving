#include<stdio.h>
int main(){
    int arr1[5] = {3, 4,1, 2,  5};
    int arr2[5] = { 8, 9,6, 7, 10};
    int margeArr[10]={0};

      // marge array   
  	for(int i = 0; i < 5; i++)
  	{
      	margeArr[i] = arr1[i];
  	}
 	for(int i = 0, j = 5; j < 10 && i < 5; i++, j++)
  	{
  		margeArr[j] = arr2[i];
  	}

    //descending array
      int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if (margeArr[i]>margeArr[j])
            {
                temp = margeArr[i];
                margeArr[i] = margeArr[j];
                margeArr[j] = temp;
            }
        }
        
    }

    for (int  i = 0; i < 10; i++)
    {
        printf("%d ", margeArr[i]);
    }
    
    

    return 0;
}