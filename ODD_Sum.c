#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int  arr[100],i,sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}