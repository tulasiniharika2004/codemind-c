#include<stdio.h>
int main()
{
    int n,b,s=0,c=0,m,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=s/n;
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}