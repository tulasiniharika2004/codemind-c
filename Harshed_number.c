#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(t%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}