#include<stdio.h>
int main()
{
    int n,i,a[100],s=0;
    float b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=(float)s/n;
    printf("%.2f",b);
}