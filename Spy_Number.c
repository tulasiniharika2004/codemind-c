#include<stdio.h>
int main()
{
    int n,s=0,p=1,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s+=r;
        p*=r;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}