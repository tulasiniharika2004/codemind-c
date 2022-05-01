#include<stdio.h>
int main()
{
    int n,d,t,x;
    scanf("%d",&n);
    x=n;
    t=0;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        if(t<d)
        {
            t=d;
        }
    }
    printf("%d",t);
}