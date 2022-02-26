#include<stdio.h>
int main()
{
    int n=3,m=3;
    int a[n],b[m],i,sum=0,som=0,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            sum++;
        }
        else if(a[i]<b[i])
        {
            som++;
        }
        else
        {
            t=0;
        }
    }
    printf("%d %d",sum,som);
}