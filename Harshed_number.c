#include<stdio.h>
int main()
{
    int n,t,sum=0,r;
    scanf("%d",&n);
    t=n;
    while(n!=0)
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