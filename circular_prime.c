#include<stdio.h>
int main()
{
    int n,i,c=0,c1=0,r,rev=0,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    for(j=2;j<=rev;j++)
    {
        if(rev%j==0)
        {
            c1++;
        }
    }
    if(c==1 && c1==1)
    {
        printf("circular prime");
    }
    else if(c==1 and c1!=1)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=1)
    {
        printf("not prime");
    }
}