#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}