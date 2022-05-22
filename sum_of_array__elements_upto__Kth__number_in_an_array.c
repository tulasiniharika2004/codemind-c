#include<stdio.h>
int main()
{
    int n,i,a[100],s=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(a[i]==k)
        {
            break;
        }
    }
    printf("%d",s);
}