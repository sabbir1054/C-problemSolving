#include<stdio.h>

struct Result
{
    int vagFol;
    int vagSes;
};

struct Result divide(int x, int y)
{
    struct Result result;
    result.vagFol = x / y;
    result.vagSes = x % y;
    return result;
};


int main (){
    int a = 10,b=3;

    struct Result result = divide(a, b);

    printf("%d %d", result.vagFol, result.vagSes);

    return 0;
}