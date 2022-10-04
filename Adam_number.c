#include<stdio.h>
int main()
{
    int n,sq,sq2,rev=0,rev2=0,r,r2;
    scanf("%d",&n);
    sq=n*n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    sq2=rev*rev;
    while(sq2)
    {
        r2=sq2%10;
        rev2=rev2*10+r2;
        sq2=sq2/10;
    }
    if(sq==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}