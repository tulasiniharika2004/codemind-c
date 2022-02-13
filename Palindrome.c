#include<stdio.h>
int main()
{
    int N,r,rev=0,t;
    scanf("%d",&N);
    t=N;
    while(N!=0)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}