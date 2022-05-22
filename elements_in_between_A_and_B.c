#include<stdio.h>
int main()
{
    int a,b,n,i,arr[i],x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(a<=arr[i] && arr[i]<=b || b<=arr[i] && arr[i]<=a)
        {
            printf("%d ",arr[i]);
            x++;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}