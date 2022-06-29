#include<stdio.h>
int main()
{
    int i,n,c=0,rem,k=0,c1=0;
    scanf("%d",&n);
    int arr[n],a1[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        a1[k]=c;
        k++;
    }
    for(k=0;k<n;k++)
    {
        if(a1[k]%2==0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}