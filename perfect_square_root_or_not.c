#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i*i==n)
        {
            k++;
        }
    }
    if(k==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}