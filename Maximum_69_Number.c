#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    if(d==6)
    {
        d=9;
    }
    else if(c==6)
    {
        c=9;
    }
    else if(b==6)
    {
        b=9;
    }
    else if(a==6)
    {
        a=9;
    }
    printf("%d%d%d%d",d,c,b,a);
}