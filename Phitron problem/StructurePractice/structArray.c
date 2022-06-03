#include<stdio.h>


struct arrayHolder
{
    int array[100];
};

struct arrayHolder makeNArray(int n)
{
    struct arrayHolder ans;
    for (int i = 0; i < n; i++)
    {
        ans.array[i] = i + 1;
    }
    return ans;
};




int main(){

    int n;
    scanf("%d", &n);

    struct arrayHolder ans = makeNArray(n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans.array[i]);
    }
    
    

    return 0;
}