#include<stdio.h>
int main()
{
    int n,arr[n],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            s=s+1;
        }
        
    }
    if(s==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}