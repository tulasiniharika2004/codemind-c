#include<stdio.h>
int main()
{
    int n,r=1,t,sq;
    scanf("%d",&n);
    t=n;
    sq=n*n;
    while(n!=0)
    {
        r=r*10;
        n=n/10;
    }
    if(sq%r==t)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}