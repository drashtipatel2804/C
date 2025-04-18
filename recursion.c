#include<stdio.h>
int sum(int n);
int main()
{
    return 0;
}
int sum(int n)
{
    int sumNm1=sum(n-1); //sum of 1 to n
    int sumN=sumNm1+n;
    return sum;
}
//n=3
// sumNm1=sum(2)
//=sum(2-1)